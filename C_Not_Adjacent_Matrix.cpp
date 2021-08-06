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
    int n;
    cin >> n;
    if (n == 1) {
        cout << 1 << endl;
        return;
    }
    if (n == 2) {
        cout << -1 << endl;
        return;
    }
    int isEven = 0;
    int row = 0, cnt = 1;
    vector<vi> m(n, vi(n + 1));
    for (int i = 0; i < n; i++) {
        m[i][n] = isEven;
        isEven = isEven == 1 ? 0 : 1;
    }
    bool ok = true;
    while (cnt <= n * n) {
        while (row < n) {
            int column = m[row][n];
            while (column < n) {
                m[row][column] = cnt;
                cnt += 1;
                column += 2;
                if (cnt > n * n) {
                    ok = false;
                    break;
                }
            }
            if (!ok) break;
            m[row][n] = m[row][n] == 1 ? 0 : 1;
            row += 1;
            if (row == n) row = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << m[i][j] << ' ';
        }
        cout << endl;
    }
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
