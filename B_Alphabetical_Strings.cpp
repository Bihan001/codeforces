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
    string s;
    cin >> s;
    int n = s.length();
    int left = 0, right = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'a') {
            left = i, right = i;
            break;
        }
    }
    map<char, bool> hash;
    map<char, int> ind;
    for (int i = 0; i < n; i++) {
        hash[s[i]] = true;
        ind[s[i]] = i;
    }
    bool flag = false;
    for (int i = 0; i < n; i++) {
        if (!hash['a' + i]) {
            flag = true;
            break;
        }
    }
    if (flag) {
        cout << "NO\n";
        return;
    }
    for (int i = 1; i < n; i++) {
        if (ind['a' + i] == left - 1)
            left -= 1;
        else if (ind['a' + i] == right + 1)
            right += 1;
        else {
            flag = true;
            break;
        }
    }
    if (flag) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
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
