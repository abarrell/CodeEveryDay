#include "operators.h"

ostream &operator<<( ostream &out, const  vector<int> &v ) { 
	out << "[ ";
	for (int i = 0; i < v.size()-1; ++i) {
		out << v[i] <<", "; 
	}
	out << v[v.size()-1] << " ]"<< endl;
	return out;
}
