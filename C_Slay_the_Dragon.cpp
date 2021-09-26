// Author: Bihan Chakraborty
// Linkedin: https://www.linkedin.com/in/bihan-chakraborty
// Github: https://github.com/Bihan001

#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define pii pair<int, int>
#define pb push_back
#define mp make_pair
#define all(a) a.begin(), a.end()
const int MOD = 1e9 + 7;
const int INF = 1e18;
#define inputarr(arr, n) \
    for (int i = 0; i < n; i++) cin >> arr[i];
#define printarr(arr, n) \
    for (int i = 0; i < n; i++) cout << arr[i] << ' ';

void solve() {
    int n;
    cin >> n;
    vi arr(n);
    inputarr(arr, n);
    sort(all(arr));
    int sum = accumulate(all(arr), 0ll);
    int m;
    cin >> m;
    while (m--) {
        int x, y;
        cin >> x >> y;
        int i = lower_bound(all(arr), x) - arr.begin();
        if (i == n) {
            i--;
            int ans = max(0ll, x - arr[i]);
            ans += max(0ll, y - (sum - arr[i]));
            cout << ans << endl;
        } else {
            int ans1 = max(0ll, x - arr[i]), ans2 = INF;
            ans1 += max(0ll, y - (sum - arr[i]));
            i--;
            if (i >= 0) {
                ans2 = max(0ll, x - arr[i]);
                ans2 += max(0ll, y - (sum - arr[i]));
            }
            cout << min(ans1, ans2) << endl;
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
