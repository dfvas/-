#include <bits/stdc++.h>
using namespace std;

int gcd(int n, int m) {
    if (n < m) swap(n, m);
    if (m == 0) return n;
    else
        return gcd(m, n % m);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
        int g = v[0];
        long long l = v[0];
        for (int i = 1; i < n; i++) {
        g = gcd(l, v[i]); 
        l *= v[i]; 
        l /= g; 
    }

    int mul = 1; 
    if (l % 2) mul++;  
    int flag = 0;
    while(1) {
        for (int i = 0; i < n; i++) {
            int tmp = l * mul / v[i];
            //cout << "!"<< tmp << "\n";
            if((l*mul/v[i]) % 2) { 
                mul++; 
                break;
            }
            if (i == n - 1) flag = 1;
        }
        if (flag) break;
    }

    cout << l * mul;
}
