#include <bits/stdc++.h>
using namespace std;

void solve() {
  int x, y;
  cin >> x >> y;

  int maxi = x + y;

  int counter = 0;
  for (int i = x; i >= 0; i--) {
    if ((x & y) == 0) {
      counter = i;
      break;
    }

    x--;
    y++;
  }

  cout << maxi << " " << counter << "\n";
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
