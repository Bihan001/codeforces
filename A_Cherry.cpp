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
    ll n;
    cin >> n;
    vll arr(n);
    inputarr(arr, n);
    if (n == 2) {
        cout << arr[0] * arr[1] << endl;
        return;
    }
    vll muls(n, 0);
    muls[0] = arr[0] * arr[1];
    muls[n - 1] = arr[n - 1] * arr[n - 2];
    for (int i = 1; i < n - 1; i++) {
        muls[i] = max(arr[i] * arr[i - 1], arr[i] * arr[i + 1]);
    }
    cout << *max_element(muls.begin(), muls.end()) << endl;
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
