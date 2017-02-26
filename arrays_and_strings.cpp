// implementations for array and string problems
#include "includes.h"
#include "arrays_and_strings.h"

using namespace std;


// REQUIRES: s is a string
// EFFECTS: returns True if the string is a palindrome and false if it is not

bool checkPalindrome(string s) {
	int length = s.length();
	for(int i = 0; i < (length)/2; ++i) {
		if(s[i] != s[length-i-1]) return false;
	}
	return true;
}
