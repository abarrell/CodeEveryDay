// The controller for all my practice questions
#include "includes.h"
#include "unit_tests.h"

using namespace std;

#ifndef NDEBUG
void test(){
	testCheckPalindrome();
	testSizeOfLongestIncreasingSubset();
	testLongestIncreasingSubset();
	testIsPowerOfTwo();
}
#endif

int main(int argc, const char * argv[]) {

	#ifndef NDEBUG
	test();
	#endif

	return 0;
}


