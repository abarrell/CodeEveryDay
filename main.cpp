// The controller for all my practice questions

#include <iostream>
#include <cstdlib> 
#include <string>
#include "dynamic.h"
#include "arrays_and_strings.h"
#include "unit_tests.h"

using namespace std;

#ifndef NDEBUG
void test(){
	testCheckPalindrome();
	testSizeOfLongestIncreasingSubset();
	testLongestIncreasingSubset();
}
#endif

int main(int argc, const char * argv[]) {
	
	#ifndef NDEBUG
	test();
	#endif

	return 0;
}


