#include <bits/stdc++.h>
#include <climits>
using namespace std;
#define int long long

void solve() {
  int size, limit;
  cin >> size >> limit;

  int max_val = 1;
  vector<int> arr(size);

  for (int i = 0; i < size; i++) {
    cin >> arr[i];
    max_val = max(max_val, arr[i]);
  }

  vector<int> min_prime(max_val + 1);

  for (int i = 0; i <= max_val; i++) {
    min_prime[i] = i;
  }

  for (int i = 2; i * i <= max_val; i++) {
    if (min_prime[i] == i) {
      for (int j = i * i; j <= max_val; j += i) {
        if (min_prime[j] == j) {
          min_prime[j] = i;
        }
      }
    }
  }

  vector<int> cost(max_val + 1, 0);

  for (int val = limit + 1; val <= max_val; val++) {
    cost[val] = INT_MAX;
    int temp = val;

    while (temp > 1) {
      int factor = min_prime[temp];
      cost[val] = min(cost[val], 1 + (factor * cost[val / factor]));

      while (temp % factor == 0) {
        temp = temp / factor;
      }
    }
  }

  int total = 0;

  for (auto val : arr) {
    total += cost[val];
  }

  cout << total << "\n";
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int test_cases;
  cin >> test_cases;

  while (test_cases--) {
    solve();
  }

  return 0;
}
