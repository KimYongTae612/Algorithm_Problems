#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  int cnt = 0;
  for (int i = 1; i <= N; i++) {
    if (N % i == 0)
      cnt++;
    if (cnt == M) {
      cout << i;
      break;
    }
  }
  if (cnt < M) {
    cout << 0;
  }
}