OBJECTS = src/built-in.o

test : compile $(OBJECTS)
	$(CXX) -o bin/runtimeTest $(OBJECTS)
	
compile :
	make test -C src || exit $?
	
clean : 
	rm src/*.o bin/*