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

bool isSortedArray(vi &arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1]) return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vi arr(n);
    inputarr(arr, n);
    int i = 0;
    while (true) {
        if (isSortedArray(arr)) break;
        if ((i + 1) & 1) {
            for (int j = 0; j < n; j += 2) {
                if (j + 1 < n && arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
            }
        } else {
            for (int j = 1; j < n; j += 2) {
                if (j + 1 < n && arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
            }
        }
        i++;
    }
    cout << i << endl;
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
