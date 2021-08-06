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
    int m;
    cin >> m;
    vector<vector<int>> arr(2, vector<int>(m, 0));
    vi prefix(m, 0), suffix(m, 0);
    for (int i = 0; i < m; i++) cin >> arr[0][i];
    for (int i = 0; i < m; i++) cin >> arr[1][i];

    if (m == 1) {
        cout << 0 << endl;
        return;
    }

    // Preprocessing
    arr[0][0] = 0;
    arr[1][m - 1] = 0;
    prefix[0] = arr[1][0];
    suffix[m - 1] = arr[0][m - 1];
    for (int i = 1; i < m; i++) prefix[i] = prefix[i - 1] + arr[1][i];
    for (int i = m - 2; i >= 0; i--) suffix[i] = suffix[i + 1] + arr[0][i];

    // Logic
    int ans = INT_MAX;
    ans = min({ans, suffix[1], prefix[m - 2]});
    for (int i = 1; i < m - 1; i++) {
        ans = min(ans, max(prefix[i - 1], suffix[i + 1]));
    }
    if (ans >= INT_MAX)
        cout << 0;
    else
        cout << ans;
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
