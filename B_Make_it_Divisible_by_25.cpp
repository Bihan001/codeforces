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
    string s;
    cin >> s;
    vector<string> arr = {"00", "25", "50", "75"};
    int ans = INT_MAX;
    for (string t : arr) {
        int cnt = 0, i = s.length() - 1;
        while (i >= 0 and s[i] != t[1]) cnt++, i--;
        if (i < 0) continue;
        i--;
        while (i >= 0 and s[i] != t[0]) cnt++, i--;
        ans = min(ans, cnt);
    }
    cout << ans << endl;
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
