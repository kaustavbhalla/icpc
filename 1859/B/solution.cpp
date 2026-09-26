#include <bits/stdc++.h>
using namespace std;

#define int long long
void solve() {
  int n;
  cin >> n;
  int m;

  vector<vector<int>> a;
  for (int i = 0; i < n; i++) {
    cin >> m;

    vector<int> temp(m);

    for (int j = 0; j < m; j++) {
      cin >> temp[j];
    }
    a.emplace_back(temp);
  }

  int globalMin = INT_MAX;
  vector<pair<int, int>> vp(a.size(), {INT_MAX, INT_MAX});

  for (int i = 0; i < a.size(); i++) {
    for (int j = 0; j < a[i].size(); j++) {
      if (vp[i].first >= a[i][j]) {
        vp[i].second = vp[i].first;
        vp[i].first = a[i][j];
      } else if (a[i][j] < vp[i].second) {
        vp[i].second = a[i][j];
      }

      globalMin = min(globalMin, a[i][j]);
    }
  }

  int ans = 0;

  int smallestSecond = INT_MAX;
  for (int i = 0; i < a.size(); i++) {
    smallestSecond = min(smallestSecond, vp[i].second);
    ans += vp[i].second;
  }

  ans -= smallestSecond;
  ans += globalMin;

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
