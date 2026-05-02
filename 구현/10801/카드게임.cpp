#include <iostream>

using namespace std;

int main()
{
	int a[10];
	int b[10];

	int acount = 0, bcount = 0;

	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < 10; i++) {
		cin >> b[i];
	}

	for (int i = 0; i < 10; i++) {
		if (a[i] > b[i]) {
			acount++;
		}
		else if (b[i] > a[i]) {
			bcount++;
		}
	}

	if (acount > bcount) { 
		cout << "A";
	}
	else if (bcount > acount) {
		cout << "B";
	}
	else { 
		cout << "D";
	}
}
