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

vector<string> res;
void backtrack(string s, int open, int close, int n) {
    if (res.size() >= n) return;
    if (s.length() == n * 2) {
        res.push_back(s);
        return;
    }
    if (open < n) backtrack(s + "(", open + 1, close, n);
    if (close < open) backtrack(s + ")", open, close + 1, n);
}

void solve() {
    int n;
    cin >> n;
    res.clear();
    backtrack("", 0, 0, n);
    for (int i = 0; i < n; i++) cout << res[i] << endl;
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
