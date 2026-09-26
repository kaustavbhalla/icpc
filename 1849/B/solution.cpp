#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
  int n, k;
  cin >> n >> k;

  vector<pair<int, int>> remHealth;

  for (int i = 1; i <= n; i++) {
    int temp;
    cin >> temp;

    int remainder = temp % k;

    if (remainder == 0) {
      remainder = k;
    }

    remHealth.emplace_back(remainder, i);
  }

  sort(remHealth.begin(), remHealth.end(), [&](const auto &x, const auto &y) {
    if (x.first != y.first)
      return (x.first > y.first);
    return x.second < y.second;
  });

  for (auto [rem, idx] : remHealth) {
    cout << idx << " ";
  }

  cout << "\n";
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
