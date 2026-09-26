#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
  int n, k;
  cin >> n >> k;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int ans = 0;
  if (2 * k - 1 <= n) {
    int l = k - 1;
    int r = n - k;

    while (l <= r) {
      if (a[l] >= a[r]) {
        ans += a[l];
        l++;
      } else {
        ans += a[r];
        r--;
      }
    }
  }

  int l = k - 1;
  int r = n - k;

  while (l < n) {
    ans += max(a[l], a[r]);
    l++;
    r--;
  }

  cout << ans << "\n";
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
