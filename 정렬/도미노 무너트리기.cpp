#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, ans;
pair<int, int> arr[500000];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) 
    cin >> arr[i].first >> arr[i].second;
	sort(arr, arr + N);

	int old = -1;
	for (int i = 0; i < N; i++) {
		if (old < arr[i].first) 
      ans++;
		old = arr[i].first + arr[i].second;
	}

	cout << ans;
}
