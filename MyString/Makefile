OBJECTS = src/built-in.o

test : compile $(OBJECTS)
	$(CXX) -o bin/test $(OBJECTS) 

compile : 
	make -C src || exit $?
	
clean :
	rm bin/* src/*.o
	
