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
    string s;
    cin >> s;
    vll left(n), right(n);
    ll ans = 0, cnt = 0;
    ll start = 0;
    for (ll i = 0; i < n; i++) {
        if (s[i] == '*') break;
        start += 1;
    }
    for (ll i = n - 1; i >= 0; i--) {
        if (s[i] == '*') break;
        n -= 1;
    }
    for (ll i = start; i < n; i++) {
        left[i] = cnt;
        if (s[i] == '*') cnt += 1;
    }
    cnt = 0;
    for (ll i = n - 1; i >= start; i--) {
        right[i] = cnt;
        if (s[i] == '*') cnt += 1;
    }
    for (ll i = start; i < n; i++) {
        if (s[i] == '*') continue;
        ans += min(left[i], right[i]);
    }
    cout << ans << endl;
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
