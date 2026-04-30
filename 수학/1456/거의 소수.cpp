#include <iostream>
#include <cmath>
#include <cstring>
#include <vector>

using namespace std;

bool isPrime[10000001] = {true};

long long A, B;
vector<long long> Primes;

void CheckNonePrime()
{
    memset(isPrime, true, sizeof(isPrime));

    for (int i = 2; i * i <= 10000000; ++i)
    {
        if (isPrime[i] == false)
            continue;
        
        for (int w = i, j = i; w * j <= 10000000; j++)
        {
            isPrime[w * j] = false;
        }
    }

    for (long long i = 2; i * i <= B; ++i)
    {
        if (isPrime[i])
            Primes.push_back(i);
    }
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> A >> B;

    CheckNonePrime();

    int count = 0;

    for (size_t i = 0; i < Primes.size(); ++i)
    {
        long long num = Primes[i];

        while (Primes[i] <= B / num)
        {
            if (Primes[i] * num >= A)
                count++;
            num *= Primes[i];
        }
    }

    cout << count;
    return 0;
}
