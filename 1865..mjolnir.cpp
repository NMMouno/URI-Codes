#include <iostream>
#include<string>
using namespace std;

int main() {
  int C;
  cin >> C;
  while (C--) {
    string line;
    int N;
    cin >> line >> N;
    if (line == "Thor")
      cout << "Y" << endl;
    else
      cout << "N" << endl;
  }
  return 0;
}
