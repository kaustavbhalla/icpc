#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
  int n;
  cin >> n;

  unordered_map<int, int> hmp;

  int mx = 0;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;

    hmp[x] = y;

    mx = max(mx, x);
  }

  int i = 0;

  while (i < mx) {
    int nOcc = hmp[i];
    int mex = hmp[i] + 1;
  }
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
