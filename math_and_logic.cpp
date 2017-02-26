#include "includes.h"
#include "math_and_logic.h"


bool isPowerOfTwo(int n) {
	int num_found = 0;
	if (n == 0) return true;
	for(int i = 0; i < sizeof(int)*4; ++i) {
		if(n & 1) num_found += 1;
		n = n >> 1;
	}
	if(num_found == 1) return true;
	return false;
}
