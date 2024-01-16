#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  double salary, sales, total;
  string name;
  cin >> name >> salary >> sales;
  total = salary + (sales * 0.15);
  cout << "TOTAL = R$ " << fixed << setprecision(2) << total << endl;
  return 0;
}
