
.PHONY: all

# Shared flags etc.
include ../../Makefile.conf

all: example

.PHONY: example

igl_lib=../../

CFLAGS=-g
inc=-I$(igl_lib)/include
lib=$(OPENGL_LIB) $(GLUT_LIB) -L$(igl_lib)/lib -ligl

example: example.o
	g++ $(CFLAGS) -o example example.o $(lib)

example.o: example.cpp
	g++ $(CFLAGS) -c example.cpp -o example.o $(inc)
clean:
	rm -f example.o
	rm -f example
