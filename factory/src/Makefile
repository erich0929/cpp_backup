OBJECTS  = $(patsubst %.cpp, %.o, $(wildcard *.cpp))

all : $(OBJECTS)
	$(LD) -r -o built-in.o $(OBJECTS)