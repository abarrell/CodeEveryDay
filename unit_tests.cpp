

#include "includes.h"
#include "dynamic.h"
#include "math_and_logic.h"
#include "unit_tests.h"
#include "arrays_and_strings.h"

using namespace std;


// Test the check palindrome function with edge cases 
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


// need to add more cases for longest increasing subset
void testSizeOfLongestIncreasingSubset() {
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

void testLongestIncreasingSubset() {
	cout << "Testing longestIncreasingSubset" << endl;
	vector<int> test1;
	vector<int> comp;
	comp.push_back(-3);
	comp.push_back(-2);
	comp.push_back(-1);
	comp.push_back(0);
	comp.push_back(1);
	cout << comp << endl;
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
	cout << test1 <<endl;
	cout << longestIncreasingSubset(test1) <<endl;
	assert(longestIncreasingSubset(test1) == comp);

	cout << "Success!" << endl;
}

void testIsPowerOfTwo() {
	cout << "Testing isPowerOfTwo" << endl;
	assert(isPowerOfTwo(2) == true);
	assert(isPowerOfTwo(4) == true);
	assert(isPowerOfTwo(32) == true);
	assert(isPowerOfTwo(0) == true);
	assert(isPowerOfTwo(15)== false);
	assert(isPowerOfTwo(12) == false);
	cout << "Success!" << endl;
}

