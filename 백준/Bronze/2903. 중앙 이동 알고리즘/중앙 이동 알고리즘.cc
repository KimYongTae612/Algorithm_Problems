#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  int dot = 2;

  while (N > 0) {
    dot = dot * 2 - 1;
    N--;
  }
  cout << dot * dot;
}