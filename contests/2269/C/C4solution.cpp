#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  long long tot = 0, curr = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    tot += a[i];
  }

  if (k == 1) {
    cout << tot << "\n";
    return;
  }
  int winsiz = k - 1;
  for (int i = 0; i < winsiz; i++)
    curr += a[i];
  long long mini = curr;
  for (int i = 1; i <= k - 1; i++) {
    if (i + winsiz - 1 < n) {
      curr += a[i + winsiz - 1] - a[i - 1];
      mini = min(mini, curr);
    }
  }
  cout << tot - mini << "\n";
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
