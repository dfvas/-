#include <iostream>
#include <vector>
#define ll long long
using namespace std;
 
ll dp[200];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    dp[0] = 0; dp[1] = 1; dp[2] = 1;
 
    int n; cin >> n;
    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 3];
    }
    cout << dp[n];
}
