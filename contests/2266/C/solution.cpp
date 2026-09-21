#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void solve() {
  int str_length;
  cin >> str_length;

  string bin_str;
  cin >> bin_str;

  if (bin_str[0] == '1') {
    cout << count(bin_str.begin(), bin_str.end(), '0') << "\n";
    return;
  }

  int remaining_zeros = count(bin_str.begin(), bin_str.end(), '0');
  int seen_ones = 0;
  int min_operations = str_length;

  for (int idx = 0; idx < str_length; idx++) {
    if (bin_str[idx] == '1') { // 01001101
      seen_ones++;
    } else {
      remaining_zeros--;
    }
    min_operations = min(min_operations, remaining_zeros + seen_ones);
  }

  cout << min_operations << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int test_cases;
  cin >> test_cases;

  while (test_cases--) {
    solve();
  }

  return 0;
}
