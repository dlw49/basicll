# the compiler: gcc for C program, define as g++ for C++
CXX = g++

# compiler flags:
#  -Wall turns on most, but not all, compiler warnings
CXXFLAGS  = -std=c++11 -Wall

OBJECTS = node.o list.o
HEADERS := $(shell find . -path ./test -prune -o -name "*.hpp" -print)

testBuild: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -Itest/catch/catch.hpp -o test/node_test $(OBJECTS) test/node_test.cpp
	$(CXX) $(CXXFLAGS) -Itest/catch/catch.hpp -o test/list_test $(OBJECTS) test/list_test.cpp

test: testBuild
	test/node_test --success
	test/list_test --success

clean:
	$(RM) *.o *.gch core main test/node_test test/list_test
