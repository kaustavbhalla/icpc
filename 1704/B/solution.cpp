#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, x;
  cin >> n >> x;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int low = a[0] - x;
  int high = a[0] + x;

  int change = 0;

  for (int i = 1; i < n; i++) {
    int newLow = max(low, a[i] - x);
    int newHigh = min(high, a[i] + x);
    if (newLow <= newHigh) {
      low = newLow;
      high = newHigh;
    } else {
      change++;
      low = a[i] - x;
      high = a[i] + x;
    }
  }

  cout << change << "\n";
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
