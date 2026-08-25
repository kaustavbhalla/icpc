#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  int currLen = 1;
  int maxLen = 1;

  for (int i = 1; i < n; i++) {
    if (s[i] != s[i - 1]) {
      currLen = 1;
    } else {
      currLen++;
    }

    maxLen = max(currLen, maxLen);
  }

  cout << maxLen + 1 << "\n";
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
