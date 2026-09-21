#include <bits/stdc++.h>
#include <climits>
using namespace std;
#define int long long

void solve() {
  int n, k;
  cin >> n >> k;

  int mx = 1;
  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    mx = max(mx, a[i]);
  }

  vector<int> spf(mx + 1);

  for (int i = 0; i <= mx; i++) {
    spf[i] = i;
  }

  for (int i = 2; i * i <= mx; i++) {
    if (spf[i] == i) {
      for (int j = i * i; j <= mx; j += i) {
        if (spf[j] == j) {
          spf[j] = i;
        }
      }
    }
  }

  vector<int> dp(mx + 1, 0);

  for (int x = k + 1; x <= mx; x++) {
    dp[x] = INT_MAX;
    int y = x;

    while (y > 1) {
      int p = spf[y];
      dp[x] = min(dp[x], 1 + (p * dp[x / p]));

      while (y % p == 0) {
        y = y / p;
      }
    }
  }

  int ans = 0;

  for (auto x : a) {
    ans += dp[x];
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
