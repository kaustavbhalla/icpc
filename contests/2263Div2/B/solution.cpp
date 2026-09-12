#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;

  vector<vector<int>> ans(n, vector<int>(n, 0));

  if ((k < n) || (k >= 2 * n)) {
    cout << -1 << "\n";
  } else {
    int x = (2 * n) - k;
    int counter = 1;

    for (int i = 0; i < x; i++) {
      ans[i][i] = counter;
      counter++;
    }

    for (int i = x; i < n; i++) {
      ans[i][0] = counter;
      counter++;
    }

    for (int i = x; i < n; i++) {
      ans[0][i] = counter;
      counter++;
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (ans[i][j] == 0) {
          ans[i][j] = counter;
          counter++;
        }
      }
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cout << ans[i][j] << " ";
      }
      cout << "\n";
    }
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
