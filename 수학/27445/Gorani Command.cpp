#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m, r = 1, c = 1, x, N = 50, M = 50;
  cin >> n >> m;
  for (int i = 1; i < n; i++) {
    cin >> x;
    if (x < N) {
      r = i;
      N = x;
    }
  }
  cin >> x;
  if (x < N)
    r = n;
  M = x;
  for (int i = 2; i <= m; i++) {
    cin >> x;
    if (x < M) {
      c = i;
      M = x;
    }
  }
  cout << r << ' ' << c << '\n';
  return 0;
}
