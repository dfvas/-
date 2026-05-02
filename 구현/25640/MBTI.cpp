#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int cnt = 0;

	string S; int N; cin >> S >> N;
	while (N--) {
		string s; cin >> s;
		if (s == S) cnt++;
	}

	cout << cnt;
}
