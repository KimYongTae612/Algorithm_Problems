#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int N;
  int num[51];
  cin >> N;
  for(int i=0;i<N;i++){
    cin >> num[i];
  }
  sort(num,num+N);
  
  int result = num[0]*num[N-1];
  cout << result;
}
