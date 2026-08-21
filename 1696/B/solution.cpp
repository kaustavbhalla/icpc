#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int counter = (arr[0] != 0);

  for (int i = 1; i < n; i++) {
    if (arr[i] != 0 && arr[i - 1] == 0) {
      counter++;
    }
  }

  cout << min(counter, 2) << "\n";
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
