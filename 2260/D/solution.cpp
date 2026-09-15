#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void solve() {
  int n;
  string s;
  cin >> n >> s;

  int prev = 0;
  int ans = 0;
  bool ok = true;

  for (int i = 0; i < n; i++) {
    int curr;
    if (s[i] == '0') {
      curr = 0;
    } else if (s[i] == '+') {
      if (i + 1 < n && s[i + 1] == '-')
        curr = 1;
      else if (prev == 1)
        curr = 2;
      else
        curr = 1;
    } else {
      if (i + 1 < n && s[i + 1] == '+')
        curr = -1;
      else if (prev == 1)
        curr = 2;
      else
        curr = -1;
    }

    if (curr == prev) {
      ok = false;
      break;
    }

    ans = max(ans, abs(curr - prev));
    prev = curr;
  }
  cout << (ok ? ans : -1) << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}
