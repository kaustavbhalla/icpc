#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  int oneC = 0;
  int zeroC = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;

    if (x == 1) {
      oneC++;
    } else {
      zeroC++;
    }
  }

  if (oneC >= zeroC) {
    cout << "Bessie\n";
  } else {
    cout << "Elsie\n";
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
