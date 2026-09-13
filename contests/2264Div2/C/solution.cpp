#include <bits/stdc++.h>
using namespace std;
const long long mod = 998244353;
#define int long long

long long modPower(int a, int b) {
  int res = 1;
  while (b) {
    if (b & 1) {
      res = res * a % mod;
    }
    a = a * a % mod;
    b = b >> 1;
  }

  return res;
}

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  int fact = 1;

  for (int i = 1; i <= n - 1; i++) {
    fact = fact * i % mod;
  }

  int ans = 0;

  int suffix = a[n - 1] % mod;

  for (int i = n - 2; i >= 0; i--) {
    int choices = n - i - 1;
    int cont = (suffix - (choices % mod) * (a[i] % mod)) % mod;

    if (cont < 0) {
      cont += mod;
    }

    int ways = fact * modPower(choices, mod - 2) % mod;

    ans = (ans + cont * ways) % mod;

    suffix = (suffix + a[i]) % mod;
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

  return 0;
}
