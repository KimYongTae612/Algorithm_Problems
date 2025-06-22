#include <iostream>
#include <vector>
using namespace std;

int main() {
  int M, N;
  vector<int> data;
  int min=10000;
  int total = 0;

  cin >> M;
  cin >> N;

  for(int i=M;i<=N;i++){
    for(int j=2;j<=i;j++){
      if(i==2){total += i;min=i;break;}
      if(i%j==0){break;}
      else{if(i==j+1){
        total += i;
        if(i<min){min=i;}
      }}
    }
  }
  if(total==0){cout << -1;}
  else{cout << total << endl << min;}
}