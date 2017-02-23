//Dynamic programming problems
#include "dynamic.h"

using namespace std;


// A child is running up a staircase with n steps and can hop either 1, 2 or 3 steps
// develop an algorithm to count how many possible ways the child can run up the stairs


int numStairWaysHelper(int n, unordered_map<int,int> &memo) {
	if(n < 0) {
		return 0;
	}
	else if (n == 0) {
		return 1;
	}
	if (memo.find(n) != memo.end()) {
		return memo[n];	
	}
	int value_at_n = numStairWaysHelper(n-1, memo) + numStairWaysHelper(n-2, memo) + numStairWaysHelper(n-3, memo);
	memo[n] = value_at_n;
	return value_at_n;
}

int numStairWays(int n) {
	unordered_map<int, int> memo;
	return numStairWaysHelper(n, memo);
}

