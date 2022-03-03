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
    vi arr(n);
    inputarr(arr, n);
    int i = 0, j = k - 1, sum = 0, minsum = INT_MAX, minidx = -1;
    for (int x = 0; x < k; x++) sum += arr[x];
    while (j < n) {
        if (sum < minsum) {
            minsum = sum;
            minidx = i;
        }
        if (j + 1 == n) break;
        sum -= arr[i];
        i++, j++;
        sum += arr[j];
    }
    cout << minidx + 1 << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
