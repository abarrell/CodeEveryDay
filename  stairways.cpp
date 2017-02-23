// A child is running up a staircase with n steps and can hop either 1, 2 or 3 steps
// develop an algorithm to count how many possible ways the child can run up the stairs
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int number_of_ways = numStairWays(10)
	cout << number_of_ways;
	return 0;
}

int numStairWays(int n) {
	if(n < 0) {
		return 0;
	}
	else if (n == 0) {
		return 1;
	}
	return numStairWays(n-1) + numStairWays(n-2) + numStairWays(n-3);
}
