
.PHONY: all

all: example

.PHONY: example

# Shared flags etc.
include ../../Makefile.conf

igl_lib=../../
eigen=-I$(DEFAULT_PREFIX)/include/eigen3

CFLAGS=-g
inc=-I$(igl_lib)/include $(eigen)
lib=-L$(igl_lib)/lib -ligl

example: example.o
	g++ $(CFLAGS) -o example example.o $(lib)

example.o: example.cpp
	g++ $(CFLAGS) -c example.cpp -o example.o $(inc)
clean:
	rm -f example.o
	rm -f example
