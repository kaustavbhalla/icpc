#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  cin >> s;

  int budget0 = 0;
  int budget1 = 0;
  int kept = 0;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '0') {
      budget0++;
    } else {
      budget1++;
    }
  }

  if (budget0 == budget1) {
    cout << 0 << "\n";
  } else {
    for (auto x : s) {
      if (x == '1') {
        budget0--;
        if (budget0 < 0) {
          break;
        }
      } else {
        budget1--;
        if (budget1 < 0) {
          break;
        }
      }

      kept++;
    }

    cout << s.size() - kept << "\n";
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
