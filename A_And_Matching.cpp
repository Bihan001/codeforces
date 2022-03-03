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
    int n, k;
    cin >> n >> k;
    int l = 0, r = n - 1;
    if (k == 0) {
        while (l < r) {
            cout << l << ' ' << r << endl;
            l++, r--;
        }
        return;
    }
    if (k == n - 1) {
        if (n < 8) {
            cout << -1 << endl;
            return;
        }
        cout << n - 1 << ' ' << n - 2 << endl;
        cout << n - 3 << ' ' << 1 << endl;
        cout << 0 << ' ' << 2 << endl;
        l = 3, r = n - 4;
        while (l < r) {
            cout << l << ' ' << r << endl;
            l++, r--;
        }
        return;
    }
    cout << k << ' ' << n - 1 << endl;
    l = 1, r = n - 2;
    while (l < r) {
        if (l != k && r != k) {
            cout << l << ' ' << r << endl;
        } else {
            if (l == k) {
                cout << 0 << ' ' << r << endl;
            } else {
                cout << 0 << ' ' << l << endl;
            }
        }
        l++, r--;
    }
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
