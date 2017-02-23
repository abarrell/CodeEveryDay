# Makefile

# Compiler and linker
CPP := g++
CPPFLAGS := -Wall -Werror -pedantic 
PROJECT_FILES := dynamic.cpp main.cpp arrays_and_strings.cpp
TEST_FILES := unit_tests.cpp

# Default target
release : 
	$(CPP) $(CPPFLAGS) -D NDEBUG -O1  $(PROJECT_FILES)

# Run a regression test
test :
	$(CPP) $(CPPFLAGS) -g $(PROJECT_FILES) $(TEST_FILES)

# Remove created files
clean :
	rm -vf  *.o *.out *.gch 
