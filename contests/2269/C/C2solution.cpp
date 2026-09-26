#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int left = k - 1;
  int right = a.size() - k;

  int ans = 0;
  while (a.size() >= k) {
    if (a[left] >= a[right]) {
      ans += a[left];
      a.erase(a.begin() + left);
    } else {
      ans += a[right];
      a.erase(a.begin() + right);
    }

    left = k - 1;
    right = a.size() - k;
  }

  cout << ans << "\n";
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
