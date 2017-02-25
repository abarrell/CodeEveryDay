

#include <cassert>
#include "arrays_and_strings.h"
#include "dynamic.h"
#include "unit_tests.h"
#include <vector>

using namespace std;

void testCheckPalindrome() {
	cout << "Testing checkPalindrome" << endl;
	assert(checkPalindrome("elle") == true);
	assert(checkPalindrome("alistair") == false);
	assert(checkPalindrome("racecar") == true);
	assert(checkPalindrome("") == true);
	assert(checkPalindrome("a") == true);
	assert(checkPalindrome("ab") == false); 
	cout << "Success!" << endl;
	return;
}

void testSizeOfLongestIncreasingSubset(){
	cout << "Testing sizeofLongestIncreasingSubset" << endl;
	vector<int> test1;
	test1.push_back(0);

	test1.push_back(1);
	test1.push_back(0);
	test1.push_back(2);
	test1.push_back(3);
	test1.push_back(-3);
	test1.push_back(-2);
	test1.push_back(-1);
	test1.push_back(0);
	test1.push_back(1);
	assert(sizeofLongestIncreasingSubset(test1) == 5);
	cout << "Success!" << endl;
	return;
}

