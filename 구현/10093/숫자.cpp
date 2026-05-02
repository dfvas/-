#include <iostream>
using namespace std;
 
int main() {
	
	unsigned long long a = 0, b = 0;
	cin >> a >> b;
 
	if (a > b) {
		unsigned long long tmp = b;
		b = a;
		a = tmp;
	}
 
	if (a == b) {
		cout << 0 << endl;
	}
	else {
		cout << b - a - 1 << endl;
		for (unsigned long long i = a + 1; i < b; i++) {
			if (i == b - 1) cout << i;
			else cout << i << " ";
		}
	}
}
