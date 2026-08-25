#include <bits/stdc++.h>
#include <numeric>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int oGcd = 0;

  for (int i = 0; i < n; i++) {
    oGcd = gcd(oGcd, abs(a[i] - (i + 1)));
  }

  cout << oGcd << "\n";
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
