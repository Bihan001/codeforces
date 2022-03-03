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
    int n, q;
    cin >> n >> q;
    vi arr(n);
    inputarr(arr, n);
    vi prefixsum(n, 0);
    partial_sum(all(arr), prefixsum.begin());
    int cnt = 0;
    while (q--) {
        int k;
        cin >> k;
        cnt += k;
        if (cnt >= prefixsum[n - 1]) cnt = 0;
        auto it = lower_bound(all(prefixsum), cnt);
        cout << distance(it, prefixsum.end()) - (*it == cnt) << endl;
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
