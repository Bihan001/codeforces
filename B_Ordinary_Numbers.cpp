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

bool check(int n) {
    int prev = n % 10;
    n = n / 10;
    while (n) {
        int d = n % 10;
        if (d != prev) return false;
        n = n / 10;
    }
    return true;
}

int getClosestValue(int n) {
    int cnt = 0;
    while (n) {
        cnt += 1;
        n = n / 10;
    }
    string s = "";
    while (cnt--) {
        s += "1";
    }
    return stoi(s);
}

void solve() {
    int n;
    cin >> n;
    if (n < 10) {
        cout << n << endl;
        return;
    }
    int cnt = 9;
    int start = 10;
    while (start * 10 <= n) {
        start *= 10;
        cnt += 9;
    }
    start = getClosestValue(start);
    int tmp = start;
    while (start <= n) {
        if (check(start)) cnt += 1;
        start += tmp;
    }
    cout << cnt << endl;
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
