/*
ID: anay.agg1
PROG: gift1
LANG: C++
*/

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int NP;
  vector<string> names;
  vector<int> money;
  ofstream fout("gift1.out");
  ifstream fin("gift1.in");
  fin >> NP;
  for (int i = 0; i < NP; i++) {
    string name;
    fin >> name;
    names.push_back(name);
    money.push_back(0);
  }
  for (int k = 0; k < NP; k++) {
    string current;
    fin >> current;
    // current holds the current name
    int index;
    for (int j = 0; j < NP; j++) {
      if (names[j] == current) {
        index = j;  // finding the index of the guy who's gifting
      }
    }
    int amt, ppl;
    fin >> amt >> ppl;
    // amt = money, ppl = # of people
    vector<string> peeps = {};  // this is the people being gifted
    for (int t = 0; t < ppl; t++) {
      string nam;
      fin >> nam;
      peeps.push_back(nam);
    }
    int left, each;
    if (ppl == 0) {
      left = amt;
      each = 0;
    } else {
      left = amt % ppl;           // Amount modulo people
      each = (amt - left) / ppl;  // Floor (Amount/people)
    }
    money[index] -=
        amt;  // Here we are taking away the money gifted from the gifter
    money[index] += left;  // Giving back what they had left after gifting
    for (int p = 0; p < ppl; p++) {
      for (int p1 = 0; p1 < NP; p1++) {
        if (names[p1] == peeps[p]) {
          money[p1] +=
              each;  // adding the amount given to each of the recievers
        }
      }
    }
  }
  for (int ct = 0; ct < NP; ct++) {
    fout << names[ct] << " " << money[ct] << endl;  // outputting
  }
}
