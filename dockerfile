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
        locales-all &&\
    apt-get clean


WORKDIR /usr/src/
# Copy the current folder which contains C++ source code to the Docker image under /usr/src
COPY . /usr/src/
# Install CMake
RUN make all









#WORKDIR /TestCode

#COPY . TestCode/
# Use GCC to compile the Test.cpp source file

#RUN ls -la /usr/src/*

# Run the program output from the previous step
#CMD ["./main"]
#RUN cd test


#CMD ["./secuencial"]