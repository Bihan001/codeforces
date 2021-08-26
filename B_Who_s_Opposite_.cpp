// Author: Bihan Chakraborty
// Linkedin: https://www.linkedin.com/in/bihan-chakraborty
// Github: https://github.com/Bihan001

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
const int MOD = 1e9 + 7;
const ll INF = 1e18;
#define inputarr(arr, n) \
    for (ll i = 0; i < n; i++) cin >> arr[i];
#define printarr(arr, n) \
    for (ll i = 0; i < n; i++) cout << arr[i] << ' ';

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;
    if (b < a) swap(a, b);
    if (a - 1 > b - a - 1) {
        cout << -1 << endl;
        return;
    }
    ll n = (b - a) * 2;
    if (c > a && c > b && c > n) {
        cout << -1 << endl;
        return;
    }
    if (c == n / 2) {
        cout << n << endl;
        return;
    }
    if (c > n / 2) {
        cout << (c + (n / 2)) % n << endl;
        return;
    }
    cout << c + (n / 2) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
