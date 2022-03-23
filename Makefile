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
test:releasetest

releasetest:
	g++ -std=c++11 -isystem ~/build/googletest/ -pthread test/tests.cpp ../lib/libgtest.a -o my_googletest

#googletest11 ./test/test_main.cpp ./src/4/activity4.cpp ./test/4/ac4test1.cpp
all: release2
	 
release2:
	g++ src/5/date.cpp src/5/file.cpp src/1/activity1.cpp src/3/activity3.cpp src/4/activity4.cpp src/5/activity5.cpp src/6/activity6.cpp src/10/activity10.cpp src/11/activity11.cpp src/main.cpp -lboost_date_time -o main 

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
