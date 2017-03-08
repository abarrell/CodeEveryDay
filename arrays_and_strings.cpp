// implementations for array and string problems
#include "includes.h"
#include "arrays_and_strings.h"
#include <string>
#include <stack>

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

bool isPair(char a1, char a2) {
	switch(a1) {
		case '(':
			if(a2 != ')') {
				return false;
			}
		case ')':
			if(a2 != '(') {
				return false;
			}
	}	
	return true;
}

bool checkParenthesis(string s) {
	stack<char> stk;
	for (int i = 0; i < s.length(); ++i) {
		if(s[i] == '('){
			stk.push(s[i]);
		}
		else if (s[i] == ')') {
			if(stk.empty() || stk.top() != '('){
				return false;
			}
			else stk.pop();
		}
	}
	if(!stk.empty()) {
		return false;
	}
	return true;
}
