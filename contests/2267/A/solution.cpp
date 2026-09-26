#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  char c;
  cin >> c;

  string s;
  cin >> s;

  int left = 0;
  int right = n - 1;

  int counter = 0;
  while (left < right) {
    if (s[left] != s[right]) {
      if (s[left] == c || s[right] == c) {
        counter++;
      } else {
        counter += 2;
      }
    }

    left++;
    right--;
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
