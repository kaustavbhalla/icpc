#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n, k, q;
  cin >> n >> k >> q;

  vector<long long> a(n);

  for (long long i = 0; i < n; i++) {
    cin >> a[i];
  }

  long long l = 0;
  long long r = 0;

  long long counter = 0;
  while (r < n) {
    if (a[r] <= q) {
      r++;
      continue;
    } else {
      if ((r - l) >= k) {
        counter += (((r - l) - k + 1) * ((r - l) - k + 2)) / 2;
      }

      l = r + 1;
      r++;
    }
  }

  if (l != r) {
    if ((r - l) >= k) {
      counter += (((r - l) - k + 1) * ((r - l) - k + 2)) / 2;
    }
  }
  cout << counter << "\n";
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
