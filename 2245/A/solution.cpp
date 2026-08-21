#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;

  string s;
  cin >> s;

  int counter = 0;

  if (k > (n / 2)) {
    cout << -1 << "\n";
  } else {
    for (int i = 0; i < k; i++) {
      if (s[i] != 'R') {
        counter++;
      }
    }

    for (int i = n - 1; i >= n - k; i--) {
      if (s[i] != 'L') {
        counter++;
      }
    }

    cout << counter << "\n";
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
