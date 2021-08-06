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
    ll n, k;
    cin >> n >> k;
    vector<pll> arr(n);
    for (ll i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr[i] = mp(x, i + 1);
    }
    sort(arr.begin(), arr.end());
    ll maxval = INT_MIN;
    for (int i = 1; i < n; i++) {
        maxval = max(maxval, (arr[i].second * arr[i - 1].second) - (k * (arr[i].first | arr[i - 1].first)));
    }
    cout << maxval << endl;
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
