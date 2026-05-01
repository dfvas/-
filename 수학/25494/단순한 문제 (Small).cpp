#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T; cin >> T;
	while (T--) {
		int cnt = 0;
		int a, b, c; cin >> a >> b >> c;
		for (int x = 1; x <= a; x++) {
			for (int y = 1; y <= b; y++) {
				for (int z = 1; z <= c; z++) {
					int X = x % y, Y = y % z, Z = z % x;
					if (X == Y && Y == Z) cnt++;
				}
			}
		}
		cout << cnt << '\n';
	}
}
