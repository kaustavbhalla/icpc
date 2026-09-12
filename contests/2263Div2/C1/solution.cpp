#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> a(n + 1);

  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  set<int> b;

  for (int i = 0; i < n; i++) {
    b.insert(i);
  }

  for (int i = 1; i <= n; i++) {
    long long left = 1LL * i * a[i];
    long long right = 1LL * i * (a[i] + 1) - 1;
    if (left >= n) {
      continue;
    }

    right = min(right, (long long)(n - 1));
    auto it = lower_bound(b.begin(), b.end(), (int)left);

    while (it != b.end() && ((*it) <= right)) {
      it = b.erase(it);
    }
  }

  cout << b.size() << "\n";
  for (auto x : b) {
    cout << x << " ";
  }

  cout << "\n";
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
