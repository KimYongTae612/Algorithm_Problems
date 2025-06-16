#include <iostream>
#include <cmath>
using namespace std;

int main(){
  string N;
  int B;
  cin >> N >> B;
  int answer = 0;

  for(int i=0;i<N.length();i++){
    char ch = N[N.length()-1-i];
    if('0' <= ch && ch <= '9'){
      answer += (ch-'0')*pow(B,i);
    }
    else{
      answer += (ch-'A'+10)*pow(B,i);
    }
  }
  cout << answer;
}