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

long long addLinkedList(node * n1, node * n2) {
	int order = 1;
	long long total = 0;
	while(n1->next && n2->next) {
		total += n1->data*order + n2->data*order;
		n1 = n1->next;
		n2 = n2->next;
		order *= 10;
	}
	while(n1->next){
		total += n1->data*order;
		order *= 10;
		n1 = n1->next;
	}
	while(n2->next){
		total += n2->data*order;
		order *= 10;
		n2 = n2->next;
	}
	return total;
}