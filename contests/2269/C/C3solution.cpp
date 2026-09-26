#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
  int n, k;
  cin >> n >> k;

  vector<int> a(n);
  int totSum = 0;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    totSum += a[i];
  }

  if (k == 1) {
    cout << totSum << "\n";
  } else {
    int win = k - 1;
    int currSum = 0;

    for (int i = 0; i < win; i++) {
      currSum += a[i];
    }

    int minSum = currSum;

    for (int i = win; i < n; i++) {
      currSum += a[i] - a[i - win];
      minSum = min(minSum, currSum);
    }

    cout << totSum - minSum << "\n";
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
