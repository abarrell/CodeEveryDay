# Makefile
# Compiler
CPP := g++
# standard flags
CPPFLAGS := -Wall -Werror -pedantic -std=c++1y
# list of files in the project release
PROJECT_FILES := dynamic.cpp main.cpp arrays_and_strings.cpp math_and_logic.cpp operators.cpp
# list of test files not to be included in release
TEST_FILES := unit_tests.cpp

# Default target
release : 
	$(CPP) $(CPPFLAGS) -D NDEBUG -O1  $(PROJECT_FILES)

# Run a regression test
test :
	$(CPP) $(CPPFLAGS) -g $(PROJECT_FILES) $(TEST_FILES)
	./a.out
	make clean

# Remove created files
clean :
	rm -vf  *.o *.out *.gch 
