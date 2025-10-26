#include <bits/stdc++.h>
using namespace std;

long long phi(long long n) {
    long long result = n;
    for (long long p = 2; p * p <= n; p++) {
        if (n % p == 0) {
            // p is a prime factor
            while (n % p == 0)
                n /= p;
            result -= result / p; 
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}

int main() {
    long long n;
    cout << "Enter n: ";
    cin >> n;
    cout << "φ(" << n << ") = " << phi(n) << endl;
    return 0;
}
