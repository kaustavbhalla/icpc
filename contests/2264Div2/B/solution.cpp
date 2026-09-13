#include <bits/stdc++.h>
using namespace std;

const long long consta = -10e15;

void solve() {
  long long n, m;
  cin >> n >> m;

  vector<long long> a(n);

  for (long long i = 0; i < n; i++) {
    cin >> a[i];
  }

  vector<long long> dp(n + 1, consta);

  long long ans = consta;

  dp[0] = 0LL;
  for (long long i = 0; i < n; i++) {
    if (n == 1) {
      ans = max(ans, a[i]);
    } else if (dp[m - 1] != consta) {
      ans = max(ans, dp[m - 1] + 1LL * m * a[i]);
    }

    for (long long k = min(m, i + 1); k >= 1; k--) {
      if (dp[k - 1] != consta) {
        dp[k] = max(dp[k], dp[k - 1] - a[i]);
      }
    }
  }

  cout << ans << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
