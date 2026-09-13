#include <bits/stdc++.h>
#include <climits>
using namespace std;
#define int long long

void solve() {
  int n, m;
  cin >> n >> m;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int k = m - 1;

  priority_queue<int> mh;

  int sum = 0;
  int ans = LLONG_MIN;

  for (int i = 0; i < n; i++) {
    if ((long long)mh.size() == k) {
      ans = max(ans, m * a[i] - sum);
    }

    if (k > 0) {
      if ((long long)mh.size() < k) {
        mh.push(a[i]);
        sum += a[i];
      } else if (a[i] < mh.top()) {
        sum -= mh.top();
        mh.pop();

        mh.push(a[i]);
        sum += a[i];
      }
    }
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
}
