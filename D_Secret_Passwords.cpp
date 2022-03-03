// ? The problem is done using 2 approaches: Bipartite and DSU

// * Bipartite Approach

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define vi vector<int>
// #define vll vector<ll>
// #define pii pair<int, int>
// #define pll pair<ll, ll>
// #define pb push_back
// #define mp make_pair
// const int MOD = 1e9 + 7;
// const ll INF = 1e18;
// #define inputarr(arr, n) \
//     for (ll i = 0; i < n; i++) cin >> arr[i];
// #define printarr(arr, n) \
//     for (ll i = 0; i < n; i++) cout << arr[i] << ' ';

// void dfs(int i, vector<vi> &graph, vector<bool> &visited) {
//     visited[i] = true;
//     for (int it : graph[i]) {
//         if (!visited[it]) {
//             dfs(it, graph, visited);
//         }
//     }
// }

// void solve() {
//     int n;
//     cin >> n;
//     vector<vi> graph(n + 26);
//     for (int i = 0; i < n; i++) {
//         string s;
//         cin >> s;
//         // n vertices for n strings then another 26 vertices for each alphabet
//         // we add an undirected edge between the string and every alphabet present in the string
//         // then we can search for each connected component by running dfs over all the alphabets
//         for (char ch : s) {
//             graph[i].pb(n + (ch - 'a'));
//             graph[n + (ch - 'a')].pb(i);
//         }
//     }
//     int ans = 0;
//     vector<bool> visited(n + 26, false);
//     for (int i = n; i < n + 26; i++) {
//         if (!visited[i] && !graph[i].empty()) {
//             ans += 1;
//             dfs(i, graph, visited);
//         }
//     }
//     cout << ans << endl;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     int t = 1;
//     // cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }

// * DSU APPROACH

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

vi parent, ranks;

char find(char ch) {
    int c = ch - 'a';
    if (c == parent[c]) return ch;
    return parent[c] = find(parent[c]);
}

void Union(char a, char b) {
    a = find(a);
    b = find(b);
    if (ranks[a - 'a'] < ranks[b - 'a'])
        parent[a - 'a'] = b;
    else if (ranks[b - 'a'] < ranks[a - 'a'])
        parent[b - 'a'] = a;
    else {
        parent[b - 'a'] = a;
        ranks[a - 'a']++;
    }
}

void solve() {
    int n;
    cin >> n;
    parent.resize(26);
    ranks.resize(26, 0);
    for (int i = 0; i < 26; i++) parent[i] = i;
    unordered_set<char> ss;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            ss.insert(s[i]);
            for (int j = i + 1; j < s.length(); j++) {
                if (find(s[i]) != find(s[j])) {
                    Union(s[i], s[j]);
                }
            }
        }
    }
    unordered_set<char> s;
    for (auto it : ss) s.insert(find(it));
    cout << s.size() << endl;
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
