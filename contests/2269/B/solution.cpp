#include <bits/stdc++.h>
using namespace std;
#define int long long

int calculateDigitSquareSum(int value) {
  int runningSum = 0;

  while (value > 0) {
    int lastDigit = value % 10;
    runningSum += lastDigit * lastDigit;
    value /= 10;
  }

  return runningSum;
}

void solve() {
  int elementCount;
  cin >> elementCount;

  vector<int> numbers(elementCount);

  for (int idx = 0; idx < elementCount; idx++) {
    cin >> numbers[idx];
  }

  map<int, int> terminalValueCounts;

  for (int idx = 0; idx < elementCount; idx++) {
    int transformedVal = numbers[idx];
    for (int step = 0; step < 1000; step++) {
      transformedVal = calculateDigitSquareSum(transformedVal);
    }

    terminalValueCounts[transformedVal]++;
  }

  int validPairsCount = 0;

  for (auto [terminalVal, frequency] : terminalValueCounts) {
    validPairsCount += frequency * (frequency - 1) / 2;
  }

  cout << validPairsCount << "\n";
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int testCases;
  cin >> testCases;
  while (testCases--) {
    solve();
  }

  return 0;
}
