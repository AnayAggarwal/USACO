/*
ID: anay.agg1
TASK: comfortable cows
LANG: C++
*/
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int iscomfortable(const vector<int>& x1, const vector<int>& y1) {
  int bigcounter = 0;
  for (int i = 0; i < x1.size(); i++) {
    int counter = 0;
    for (int j = 0; j < x1.size(); j++) {
      int num1 = abs(x1[j] - x1[i]);
      int num2 = abs(y1[j] - y1[i]);
      if (num1 != num2 && num1 <= 1 && num2 <= 1) {
        counter++;
      }
    }
    if (counter == 3) {
      bigcounter++;
    }
  }
  return bigcounter;
}

int main() {
  int n;
  cin >> n;
  vector<int> xs;
  vector<int> ys;
  for (int j = 0; j < n; j++) {
    int x, y;
    int ctr = 0;
    cin >> x >> y;
    xs.emplace_back(x);
    ys.emplace_back(y);
    cout << iscomfortable(xs, ys) << endl;
  }
}
