############################################################
#  Edited by Luis Sucar (luis.sucar@gmail.com)
#  Alerion PID test
############################################################

# This is ths Test Makefile
# make all to compile.
CC=g++
C=gcc
#  CFLAGS will be the
# options I'll pass to the compiler.
CFLAGS=-c -Wall -std=c++11
CFLAGSDEBUG=-c -g -Wall -std=c++11
COLDFLAGS=-w -c
AR=ar ruv
RANLIB=ranlib

#cd libs/ \
 cd image-pgm/ \
gcc -w -c imagennew.c -o imagennew.o \
ar ruv imagennew.a imagennew.o \
ranlib imagennew.a \
g++ -o main main.cpp ../libs/image-pgm/imagennew.a 

all: release2
	 
release2:
	g++ src/date.cpp src/file.cpp src/activity1.cpp src/activity3.cpp src/activity4.cpp src/activity5.cpp src/main.cpp -lboost_date_time -o main 

#main.o \
	$(CC) main.o  -o main\
	 \
main.o: src/main.cpp\
	$(CC) $(CFLAGS) src/main.cpp\
	 \
secuencial.o: secuencial.cpp\
	$(CC) $(CFLAGS) secuencial.cpp\
	 \
clean:\
	rm *o proyectoSencilloTesis\
\
mainlib:\
	gcc -w -c imagennew.c -o imagennew.o\ 
