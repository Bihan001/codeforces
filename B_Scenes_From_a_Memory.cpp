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
    string s;
    cin >> n >> s;
    bool n2 = false, n3 = false, n5 = false, n7 = false;
    for (int i = 0; i < n; i++) {
        char c = s[i];
        if (c != '2' && c != '5' && c != '3' && c != '7') {
            cout << 1 << endl << c << endl;
            return;
        }
    }
    for (int i = 0; i < n; i++) {
        char c = s[i];
        if (c == '2') {
            if (n2) {
                cout << 2 << endl << 22 << endl;
                return;
            } else if (n3) {
                cout << 2 << endl << 32 << endl;
                return;
            } else if (n5) {
                cout << 2 << endl << 52 << endl;
                return;
            } else if (n7) {
                cout << 2 << endl << 72 << endl;
                return;
            }
            n2 = true;
        }
        if (c == '5') {
            if (n2) {
                cout << 2 << endl << 25 << endl;
                return;
            } else if (n3) {
                cout << 2 << endl << 35 << endl;
                return;
            } else if (n5) {
                cout << 2 << endl << 55 << endl;
                return;
            } else if (n7) {
                cout << 2 << endl << 75 << endl;
                return;
            }
            n5 = true;
        }
        if (c == '3') {
            if (n3) {
                cout << 2 << endl << 33 << endl;
                return;
            }
            n3 = true;
        }
        if (c == '7') {
            if (n2) {
                cout << 2 << endl << 27 << endl;
                return;
            } else if (n5) {
                cout << 2 << endl << 57 << endl;
                return;
            } else if (n7) {
                cout << 2 << endl << 77 << endl;
                return;
            }
            n7 = true;
        }
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
