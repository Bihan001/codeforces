// Generating all prime number up to  R

// creating an array of size (R-L-1) set all elements to be true: prime && false: composite

#include <bits/stdc++.h>

using namespace std;

#define ll long long

void sieve(int n, vector<int>& primes) {
    vector<bool> isPrime(n, true);
    for (int i = 2; i * i < n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    primes.push_back(2);
    for (int i = 3; i < n; i += 2) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
}

// Segmented Sieve
void primesInRange(ll l, ll r, vector<int>& primes) {
    vector<bool> isPrime(r - l + 1, true);
    // Exception
    if (l == 1) isPrime[0] = false;
    for (int i = 0; (ll)(primes[i] * primes[i]) <= r; i++) {
        int currPrime = primes[i];
        // just smaller or equal value to l
        ll base = (l / (currPrime)) * (currPrime);

        if (base < l) base += currPrime;

        // mark all multiplies within L to R as false
        for (ll j = base; j <= r; j += currPrime) isPrime[j - l] = false;

        // there may be a case where base is itself a prime number
        if (base == currPrime) isPrime[base - l] = true;
    }

    for (int i = 0; i <= r - l; i++) {
        if (isPrime[i] == true) {
            cout << i + l << endl;
        }
    }
    cout << endl;
}
int main() {
    vector<int> primes;
    sieve(100001, primes);

    int t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;
        primesInRange(l, r, primes);
    }

    return 0;
}