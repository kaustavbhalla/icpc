#include <bits/stdc++.h>
#include <climits>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  pair<int, int> minV = {-1, INT_MAX};
  pair<int, int> maxV = {-1, INT_MIN};

  for (int i = 0; i < n; i++) {
    if (a[i] < minV.second) {
      minV = {i, a[i]};
    }

    if (a[i] > maxV.second) {
      maxV = {i, a[i]};
    }
  }

  // cout << minV.first << " " << maxV.first << "\n";

  if (minV.first == 0 || maxV.first == n - 1) {
    cout << maxV.second - minV.second << "\n";
  } else {
    cout << max(maxV.second - a[0], a[n - 1] - minV.second) << "\n";
  }
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
