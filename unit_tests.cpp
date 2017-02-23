

#include <cassert>
#include "arrays_and_strings.h"
#include "dynamic.h"
#include "unit_tests.h"

void testCheckPalindrome() {
	cout << "Testing checkPalindrome" << endl;
	assert(checkPalindrome("elle") == true);
	assert(checkPalindrome("alistair") == false);
	assert(checkPalindrome("racecar") == true);
	assert(checkPalindrome("") == true);
	assert(checkPalindrome("a") == true);
	assert(checkPalindrome("ab") == false); 
	cout << "Success!" << endl;
}


