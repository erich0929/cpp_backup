OBJECTS = $(patsubst %.cpp, %.o, $(wildcard *.cpp))

test : $(OBJECTS)
	$(LD) -r -o built-in.o $(OBJECTS)
	