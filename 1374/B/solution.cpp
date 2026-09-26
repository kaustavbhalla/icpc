#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n;
  cin >> n;

  long long counter = 0;
  while (n % 6 == 0) {
    n = n / 6;
    counter++;
  }

  while (n % 3 == 0) {
    n = n / 3;
    counter += 2;
  }

  if (n == 1) {
    cout << counter << "\n";
  } else {
    cout << "-1\n";
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
