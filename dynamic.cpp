//Dynamic programming problems
#include "dynamic.h"

using namespace std;


// A child is running up a staircase with n steps and can hop either 1, 2 or 3 steps
// develop an algorithm to count how many possible ways the child can run up the stairs

static int numStairWaysHelper(int n, unordered_map<int,int> &memo) {
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

// [1,2,5,6,4,3,8,1,9,10,2,7,8,5,6,1] ---> 


// Subset data struct for sizeofLongestSubset
struct SubDat {
	int last;
	int size;
};

// finds the size of the longest STRICTLY increasing subset in a vector
int sizeofLongestIncreasingSubset(vector<int> v) {

	vector<SubDat> memo;

	SubDat init;
	init.last = v[0];
	init.size = 1;
	memo.push_back(init);

	for(int i = 1; i < v.size(); ++i) {
		int size = memo.size();
		for (int j = 0; j < size; ++j) {
			SubDat n;
			if(memo[j].last < v[i]){
				n.last = v[i];
				n.size = memo[j].size +1;
				memo.push_back(n);
				continue;
			}
			else {
				n.last = v[i];
				n.size = 1;
				memo.push_back(n);
				continue;
			}
		}
	}
	int highest = 0;
	for (int k = 0; k < memo.size(); ++k) {
		if(memo[k].size > highest) highest = memo[k].size;
	}
	return highest;
}	


// Returns the longest strictly increasing subset in a given vector 

vector<int> longestIncreasingSubset(vector<int> v) {

	vector< vector<int> > sets;
	vector<int> n;
	n.push_back(v[0]);
	sets.push_back(n);

	for(int i = 1; i < v.size(); ++i) {
		int size = sets.size();
		for (int j = 0; j < size; ++j) {
				int setsize = sets[j].size();
				if(sets[j][setsize-1] < v[i]){
					sets[j].push_back(v[i]);
					continue;
				}
				else {
					vector<int> n;
					n.push_back(v[i]);
					sets.push_back(n);
					continue;
				}
		}
	}
	int highest = 0;
	vector<int> finalSet;
	for (int k = 0; k < sets.size(); ++k) {
		if (sets[k].size() > highest){
			highest = sets[k].size();
			finalSet = sets[k];		
		} 
	}
	return finalSet;
}


