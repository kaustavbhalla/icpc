#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define int long long

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;

    a[i] = x - (i + 1);
  }

  sort(a.begin(), a.end());

  unordered_map<int, int> dp;
  int ans = 0;

  for (auto x : a) {
    if (dp.count(x)) {
      continue;
    }

    dp[x] = dp[x - 1] + 1;
    ans = max(ans, dp[x]);
  }

  cout << ans << "\n";
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
