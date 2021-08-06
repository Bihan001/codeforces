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
    ll n;
    cin >> n;
    string enemy, player;
    cin >> enemy >> player;
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        if (player[i] == '0') continue;
        if (player[i] == '1' && enemy[i] == '0') {
            ans += 1;
            enemy[i] = 'F';
            continue;
        }
        if (i - 1 >= 0 && enemy[i - 1] == '1') {
            ans += 1;
            enemy[i - 1] = 'F';
        } else if (i + 1 < n && enemy[i + 1] == '1') {
            ans += 1;
            enemy[i + 1] = 'F';
        }
    }
    cout << ans << endl;
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
