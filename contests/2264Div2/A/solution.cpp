#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  vector<int> b;

  for (int i = 0; i < n; i++) {
    if (a[i] != i + 1) {
      b.emplace_back(a[i]);
    }
  }

  bool isDesc = true;

  for (int i = 1; i < b.size(); i++) {
    if (b[i] > b[i - 1]) {
      isDesc = false;
    }
  }

  if (isDesc == true) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
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
