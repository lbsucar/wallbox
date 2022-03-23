# Get the GCC preinstalled image from Docker Hub
#FROM gcc:6.3
#RUN sudo apt-get -y install libc6-dbg gdb valgrind
# Specify the working directory
FROM ubuntu:18.04

# Install necessary dependencies
RUN apt-get update &&\
    apt-get install -y --no-install-recommends \
        build-essential \
        libboost-all-dev \
        autoconf \
        automake \
        libtool \
        pkg-config \
        apt-transport-https \
        ca-certificates \
        software-properties-common \
        wget \
        git \
        curl \
        gnupg \
        zlib1g-dev \
        swig \
        vim \
        gdb \
        valgrind \
        locales \
        cmake \
        locales-all \
        libgtest-dev &&\
    apt-get clean


RUN cd /usr/src/gtest &&\
    cmake CMakeLists.txt &&\
    make &&\    
    cp *.a /usr/lib
 
WORKDIR /usr/src/
# Copy the current folder which contains C++ source code to the Docker image under /usr/src
COPY . /usr/src/

RUN cd build &&\
    cmake .. -DCMAKE_BUILD_TYPE=Debug -G "Unix Makefiles" &&\
    make all &&\
    cd test &&\
    ./WallboxTechnicalTest_tst

WORKDIR /usr/src/build
