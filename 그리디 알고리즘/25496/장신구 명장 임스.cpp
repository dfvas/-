#include <iostream>
#include <algorithm>
using namespace std;

int P, N;
int arr[1000];
int ans;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> P >> N;
	for (int i = 0; i < N; i++) cin >> arr[i];
	sort(arr, arr + N);

	for (int i = 0; i < N && P < 200; i++) {
		P += arr[i];
		ans++;
	}

	cout << ans;
}
