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
    string s;
    cin >> s;
    unordered_map<char, int> hash;
    for (char c : s) hash[c]++;
    bool f = true;
    while (true) {
        if (hash['A'] > 0 && hash['B'] > 0) {
            hash['A']--, hash['B']--;
        } else if (hash['B'] > 0 && hash['C'] > 0) {
            hash['B']--, hash['C']--;
        } else {
            if (hash['A'] == 0 && hash['B'] == 0 && hash['C'] == 0) {
                f = true;
            } else {
                f = false;
            }
            break;
        }
    }
    if (f)
        cout << "YES";
    else
        cout << "NO";
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
