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
    int k, n, m;
    cin >> k >> n >> m;
    vi a(n), b(m), ans;
    inputarr(a, n);
    inputarr(b, m);
    int i = 0, j = 0;
    while (i < n || j < m) {
        if (i < n && a[i] == 0) {
            ans.pb(a[i]);
            k++, i++;
        } else if (j < m && b[j] == 0) {
            ans.pb(b[j]);
            k++, j++;
        } else {
            if (i < n && a[i] <= k) {
                ans.pb(a[i]);
                i += 1;
            } else if (j < m && b[j] <= k) {
                ans.pb(b[j]);
                j += 1;
            } else {
                cout << -1 << endl;
                return;
            }
        }
    }
    printarr(ans, ans.size());
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
