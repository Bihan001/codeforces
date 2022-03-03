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

bool sortComparator(pll a, pll b) {
    if (a.first < b.first) return true;
    if (a.first > b.first) return false;
    return a.second < b.second;
}

void solve() {
    ll x0, y0, x1, y1, n;
    cin >> x0 >> y0 >> x1 >> y1 >> n;
    pll start = mp(x0, y0), end = mp(x1, y1);
    map<pll, ll> hash;
    vector<pll> arr;
    while (n--) {
        ll r, a, b;
        cin >> r >> a >> b;
        hash[mp(r, a)] = 1;
        arr.pb(mp(r, a));
        if (mp(r, a) != mp(r, b)) {
            hash[mp(r, b)] = 2;
            arr.pb(mp(r, b));
        }
    }
    sort(arr.begin(), arr.end(), sortComparator);
    ll startIdx = lower_bound(arr.begin(), arr.end(), start) - arr.begin();
    ll endIdx = lower_bound(arr.begin(), arr.end(), end) - arr.begin();

    // base case: start position or end position not allowed
    if ((arr[startIdx] != start && hash[arr[startIdx]] != 2) || (arr[endIdx] != end && hash[arr[endIdx]] != 2)) {
        cout << -1 << endl;
        return;
    }

    map<pll, ll> distance, visited;
    queue<pll> q;
    q.push(start);
    visited[start] = true;
    distance[start] = 0;
    while (!q.empty()) {
        pll curr = q.front();
        q.pop();

        if (curr == end) break;

        vector<pll> neighbourCells = {{curr.first + 1, curr.second},     {curr.first - 1, curr.second},     {curr.first, curr.second + 1},
                                      {curr.first, curr.second - 1},     {curr.first - 1, curr.second - 1}, {curr.first - 1, curr.second + 1},
                                      {curr.first + 1, curr.second + 1}, {curr.first + 1, curr.second - 1}};
        for (pll neighbour : neighbourCells) {
            ll neighbourIdx = lower_bound(arr.begin(), arr.end(), neighbour) - arr.begin();
            if (arr[neighbourIdx].first != neighbour.first) continue;
            if (!visited[neighbour] && (arr[neighbourIdx] == neighbour || hash[arr[neighbourIdx]] == 2)) {
                visited[neighbour] = true;
                distance[neighbour] = distance[curr] + 1;
                q.push(neighbour);
            }
        }
    }
    if (distance[end]) {
        cout << distance[end] << endl;
        return;
    }
    cout << -1 << endl;
}

int main() {
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
