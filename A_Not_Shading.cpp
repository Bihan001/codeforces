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
    int n, m, r, c;
    cin >> n >> m >> r >> c;
    r--, c--;
    vector<vector<char>> arr(n, vector<char>(m));
    bool blackPresent = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 'B') blackPresent = true;
        }
    }
    if (!blackPresent) {
        cout << -1 << endl;
        return;
    }
    if (arr[r][c] == 'B') {
        cout << 0 << endl;
        return;
    }
    bool f = false;
    for (int i = 0; i < m; i++) {
        if (arr[r][i] == 'B') {
            f = true;
            break;
        }
    }
    if (!f) {
        for (int i = 0; i < n; i++) {
            if (arr[i][c] == 'B') {
                f = true;
                break;
            }
        }
    }
    if (f) {
        cout << 1 << endl;
        return;
    }
    cout << 2 << endl;
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
