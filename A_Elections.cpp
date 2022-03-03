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
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c) {
        cout << 1 << ' ' << 1 << ' ' << 1 << endl;
        return;
    }
    if (a == b) {
        if (a < c) {
            cout << c - a + 1 << ' ' << c - b + 1 << ' ' << 0 << endl;
            return;
        }
        cout << 1 << ' ' << 1 << ' ' << a - c + 1 << endl;
        return;
    }
    if (b == c) {
        if (a < b) {
            cout << b - a + 1 << ' ' << 1 << ' ' << 1 << endl;
            return;
        }
        cout << 0 << ' ' << a - b + 1 << ' ' << a - c + 1 << endl;
        return;
    }
    if (a == c) {
        if (b > a) {
            cout << b - a + 1 << ' ' << 0 << ' ' << b - c + 1 << endl;
            return;
        }
        cout << 1 << ' ' << a - b + 1 << ' ' << 1 << endl;
        return;
    }
    int m = max({a, b, c});
    if (m == a)
        cout << 0 << ' ';
    else
        cout << m - a + 1 << ' ';
    if (m == b)
        cout << 0 << ' ';
    else
        cout << m - b + 1 << ' ';
    if (m == c)
        cout << 0 << ' ';
    else
        cout << m - c + 1;
    cout << endl;
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
