#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, p;
  cin >> n >> p;

  int tempN = n;
  int totalcost = 0;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  vector<int> b(n);

  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }

  vector<pair<int, int>> vp;

  for (int i = 0; i < n; i++) {
    vp.emplace_back(b[i], i);
  }

  sort(vp.begin(), vp.end());

  if (vp[0].first > p) {
    cout << n * p << "\n";
  } else {
    for (int i = 0; i < n; i++) {
      int temp = vp[i].first;
      int index = vp[i].second;

      if (tempN - a[index] > 0) {
        totalcost += temp * a[index];
        tempN -= a[index];
      } else {
        int rem = abs(tempN - a[index]);
        totalcost += temp * (a[index] - rem);
      }
    }

    cout << totalcost << "\n";
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
