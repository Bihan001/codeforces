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
    int xa, ya, xb, yb, xf, yf;
    cin >> ya >> xa >> yb >> xb >> yf >> xf;
    int dist = abs(xa - xb) + abs(ya - yb);
    if (xa == xb) {
        if (xf == xa) {
            if ((yf < ya && yf > yb) || (yf > ya && yf < yb)) {
                dist += 2;
            }
        }
    } else if (ya == yb) {
        if (yf == ya) {
            if ((xf < xa && xf > xb) || (xf > xa && xf < xb)) {
                dist += 2;
            }
        }
    }
    cout << dist << endl;
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
