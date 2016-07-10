OBJECTS = src/built-in.o

all : compile $(OBJECTS)
	$(CXX) -Wall -Ofast -o bin/main $(OBJECTS)
	
compile :
	make -C src || exit $?
	
clean :
	rm src/*.o bin/*