test : compile
	$(CXX) -o bin/testFactory src/built-in.o
	
compile :
	make -C src || exit $?
	
clean : 
	rm src/*.o bin/*