OBJS = bin/Node.o \
	   bin/LinkedList.o

all: bin/llist


bin/llist: src/Main.cpp bin/liblinklist.a
	g++ -g -W -O2 -std=c++17 -o $@ $^

bin/%.o: src/%.cpp
	g++ -g -W -O2 -c -std=c++17 -o $@ $^

bin/liblinklist.a: $(OBJS)
	ar rcs bin/liblinklist.a $^

clean:
	rm -f bin/*.o bin/*.a bin/llist
