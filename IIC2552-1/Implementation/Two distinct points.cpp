#include<bits/stdc++.h>
using namespace std;

int main(){
	int q;
	cin >> q;
	while(q--) {
		int l1, r1, l2, r2;
		cin >> l1 >> r1 >> l2 >> r2;
		if (r1 != l2) {
			cout << r1 << " " << l2 << "\n";
		} 
		else {
			cout << l1 << " " << r2 << "\n";
		} 
	} 

	return 0;
} 