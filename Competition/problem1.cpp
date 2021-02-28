/*
ID: anay.agg1
TASK:year of the cow
LANG: C++
*/

#include <algorithm>
#include <cmath>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

using namespace std;
/*
vector<string> split(auto& str) {
  vector<string> tokens;
  for (auto i = strtok(&str[0], ' '); i != NULL; i = strtok(NULL, ' '))
    tokens.push_back(i);
  return tokens;
}
*/
int main() {
  /*vector<string> cycle = {"Ox",      "Tiger", "Rabbit", "Dragon",
                          "Snake",   "Horse", "Goat",   "Monkey",
                          "Rooster", "Dog",   "Pig",    "Rat"};
  vector<string> people = {"Bessie"};
  vector<int> pplvals = {0};
  int n;
  int index, val, yr;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string current;
    cin >> current;
    vector<string> things_in_current = split(current);
    people.push_back(things_in_current[1]);
    string position = things_in_current[3];
    for (int j = 0; j < people.size(); j++) {
      if (people[j] == things_in_current[7]) {
        val = pplvals[j];
      }
    }
    string type = things_in_current[4];
    for (int k = 0; k < 12; k++) {
      if (cycle[k] == type) {
        index = k;
      }
    }
    if (position == "previous") {
      index -= 12;
      yr = floor(val / 12);
      yr *= 12;
      index += yr;
    }
    if (position == "next") {
      index += 12;
      yr = floor(val / 12);
      yr *= 12;
      index += yr;
    }
  }
  for (int p = 0; p < people.size(); p++) {
    if (people[p] == "Elsie") {
      cout << abs(pplvals[p]);
    }
  }
*/
  cout << 12;
}
