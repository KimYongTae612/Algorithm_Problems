#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int N,M;
  while(1){
    cin >> N >> M;
    if(N==0 && M==0) break;

    if(M%N==0){cout << "factor"<<endl;}
    else if(N%M==0){cout <<"multiple"<<endl;}
    else{cout << "neither"<<endl;}
  }
}