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
    set<pii> s;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) s.insert({arr[i], i});
    }
    if (s.empty()) {
        cout << 0 << endl;
        return;
    }
    vector<pii> ans;
    while (!s.empty()) {
        int minval, maxval, mini, maxi;
        minval = (*s.begin()).first;
        mini = (*s.begin()).second;
        s.erase(s.begin());
        if (s.empty()) break;
        maxval = (*s.rbegin()).first;
        maxi = (*s.rbegin()).second;
        s.erase(prev(s.end()));
        if (mini == maxi) break;
        ans.pb({mini + 1, maxi + 1});
        if (minval - 1 > 0) s.insert({minval - 1, mini});
        if (maxval - 1 > 0) s.insert({maxval - 1, maxi});
    }
    cout << ans.size() << endl;
    for (auto it : ans) cout << it.first << ' ' << it.second << endl;
}

int32_t main() {
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
