#include <iostream>

using namespace std;

int main() {
	int n, t;
	int a[1001];
	int average;
	double res;
  
	cin >> n;

	while (n--) {
		cin >> t;
		average = 0;
		res = 0;
    
		for (int i = 0; i < t; i++) {
			cin >> a[i];
			average += a[i];
		}
		average /= t;

		for (int i = 0; i < t; i++) {
			if (a[i] > average) res++;
		}

		cout << fixed;
		cout.precision(3);
		cout << res / t * 100 << "% \n";
	}
}
