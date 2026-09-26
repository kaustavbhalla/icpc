#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
  int n, k;
  cin >> n >> k;

  int count = (1LL << (n - k + 1)) + 2LL * (k - 1);

  cout << count << "\n";
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
