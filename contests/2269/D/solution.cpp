#include <bits/stdc++.h>
using namespace std;

#define int long long

bool is_good_number(int value) {
  return value == 0 || value == 3 || value == 5 || value == 6 || value == 9 ||
         value == 10 || value == 12 || value == 15;
}

void process_test_case() {
  int element_count, query_count;
  cin >> element_count >> query_count;

  vector<int> elements(element_count + 1);

  int valid_count = 0;

  for (int index = 1; index <= element_count; index++) {
    cin >> elements[index];

    if (is_good_number(elements[index]))
      valid_count++;
  }

  cout << valid_count << " ";

  while (query_count--) {
    int target_index, new_value;
    cin >> target_index >> new_value;

    if (is_good_number(elements[target_index]))
      valid_count--;

    elements[target_index] = new_value;

    if (is_good_number(elements[target_index]))
      valid_count++;

    cout << valid_count << " ";
  }

  cout << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int test_cases;
  cin >> test_cases;

  while (test_cases--) {
    process_test_case();
  }

  return 0;
}
