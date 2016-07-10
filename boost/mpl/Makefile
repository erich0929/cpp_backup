OBJECTS = src/built-in.o
CPPFLAGS = -I/usr/include
LDFLAGS = -Lboost_mpl
all : compile $(OBJECTS)
	$(CXX) -o bin/main  $(OBJECTS)

compile :
	make -C src/ || exit $?
	
clean :
	rm src/*.o bin/*