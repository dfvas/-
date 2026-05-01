#include <iostream>
using namespace std;
int main()
{
	int A, B, C;
	cin >> A >> B;
	cin >> C;

	int M = (A * 60) + B;
	M += C;

	A = (M / 60) % 24;
	B = M % 60;


	cout << A << " " << B;
}
