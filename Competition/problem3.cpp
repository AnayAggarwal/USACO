/*
ID: anay.agg1
Task: clockwise fence
LANG: C++
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string tester(string route) {
  int x, y = 0;
  vector<int> xpoints, ypoints;
  for (int i = 0; i < route.length(); i++) {
    if (route.at(i) == 'N') {
      y += 1;
    }
    if (route.at(i) == 'S') {
      y -= 1;
    }
    if (route.at(i) == 'E') {
      x += 1;
    }
    if (route.at(i) == 'W') {
      x -= 1;
    }
    xpoints.push_back(x);
    ypoints.push_back(y);
  }
  int val = 0;
  for (int j = 1; j < route.length(); j++) {
    int k = xpoints[j] - xpoints[j - 1];
    int k1 = ypoints[j] + ypoints[j - 1];
    val += k * k1;
  }
  if (val < 0) {
    return "CCW";
  }
  if (val > 0) {
    return "CW";
  }
}

int main() {
  int n;
  cin >> n;
  for (int k = 0; k < n; k++) {
    string r;
    cin >> r;
    cout << tester(r) << endl;
  }
}
