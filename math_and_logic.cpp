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

node * addLinkedListRecursive(node * n1, node * n2, int carry = 0) {
	node * p = new node;
	int new_carry = 0;
	int total;
	node * n1_next;
	node * n2_next;
	if(n1 and n2) {
		total = n1->data + n2->data + carry;
		if(total >= 10) {
			new_carry = 1;
			total -= 10;
		}
		n1_next = n1->next;
		n2_next = n2->next;
	}
	else if (n1){
		total = n1->data + carry;
		n1_next = n1->next;
		n2_next = NULL;
	}
	else if (n2) {
		total = n2->data + carry;
		n2_next = n2->next;
		n1_next = NULL;
	}
	else {
		return NULL;
	}
	p->data = total;
	p->next = addLinkedListRecursive(n1_next, n2_next, new_carry);
	return p;
}