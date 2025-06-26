#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int in, out, max=0, now = 0;

  for(int i = 0 ; i<4 ; i++){
    cin >> out >> in;
    now += in - out;
    if(now > max){max = now;}
  }
  cout << max;
}
