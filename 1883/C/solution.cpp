#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  if (k != 4) {
    int maxMod = -1;

    for (auto x : a) {
      if (x % k == 0) {
        cout << 0 << "\n";
        return;
      }
      maxMod = max(maxMod, x % k);
    }

    cout << k - maxMod << "\n";
  } else {
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;

    for (auto x : a) {
      if (x % k == 0) {
        cout << 0 << "\n";
        return;
      }

      if (x % k == 1) {
        c1++;
      }

      if (x % k == 2) {
        c2++;
        if (c2 == 2) {
          cout << 0 << "\n";
          return;
        }
      }

      if (x % k == 3) {
        c3++;
      }
    }

    if (c3 != 0) {
      cout << 1 << "\n";
    } else if (c2 == 1 && c3 == 0 && c1 >= 1) {
      cout << 1 << "\n";
    } else if (c2 == 0 && c3 == 0) {
      cout << 2 << "\n";
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
