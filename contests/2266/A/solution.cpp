#include <bits/stdc++.h>
using namespace std;

void solve() {
  int m;
  cin >> m;

  int b1, b2, b3;
  cin >> b1 >> b2 >> b3;

  int minV = min(b1, min(b2, b3));
  cout << m - minV << "\n";
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
