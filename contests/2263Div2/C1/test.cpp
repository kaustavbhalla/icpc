#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a = {1, 2, 3, 4, 5};
  auto it = lower_bound(a.begin(), a.end(), 3);

  a.erase(it);

  for (auto x : a) {
    cout << x << " ";
  }

  cout << "\n";
}
