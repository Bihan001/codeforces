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

bool isPossible(ll val, vector<vll> &arr) {
    ll currval = val;
    for (ll i = 0; i < arr.size(); i++) {
        if (currval <= arr[i][0]) return false;
        currval += arr[i].size() - 1;
    }
    return true;
}

void solve() {
    ll n;
    cin >> n;
    vector<vll> arr(n);
    for (ll i = 0; i < n; i++) {
        ll k;
        cin >> k;
        arr[i].resize(k + 1);
        ll maxval = 0;
        for (ll j = 1; j <= k; j++) {
            cin >> arr[i][j];
            maxval = max(maxval, arr[i][j] - (j - 1));
        }
        arr[i][0] = maxval;
    }
    sort(arr.begin(), arr.end());
    ll start = 1;
    ll end = 2e9;  // 1e9 is the max limit of the monster's armour, so end should be greater as in worst case required hp might be max(all monsters)+1
    ll ans = 0;
    while (start <= end) {
        ll mid = start + (end - start) / 2;
        if (isPossible(mid, arr)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
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
