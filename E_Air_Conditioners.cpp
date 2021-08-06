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
    int n, k;
    cin >> n >> k;
    vi arr(k), temp(k), ans(n, INT_MAX);
    inputarr(arr, k);
    inputarr(temp, k);
    vll final_arr(n, INT_MAX), left(n), right(n);
    for (int i = 0; i < k; i++) final_arr[arr[i] - 1] = temp[i];
    ll p = INT_MAX;
    for (int i = 0; i < n; i++) {
        left[i] = p = min(p + 1, final_arr[i]);
    }
    for (int i = n - 1; i >= 0; i--) {
        right[i] = p = min(p + 1, final_arr[i]);
    }
    for (int i = 0; i < n; i++) cout << min(left[i], right[i]) << ' ';
    cout << endl;
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
