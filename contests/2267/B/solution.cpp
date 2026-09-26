#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  unordered_map<int, int> hmp;

  for (int i = 0; i < n; i++) {
    hmp[a[i]]++;
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 100; j >= 1; j--) {
      if (hmp[j] >= i) {
        cout << j << " ";
      }
    }
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
