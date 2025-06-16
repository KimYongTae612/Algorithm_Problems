#include <iostream>
using namespace std;

int main(){
  int db[9][9] = {{0}};
  for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){
      cin >> db[i][j];
    }
  }
  int maxi = 0;
  int maxj = 0;
  int max = 0;
  for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){
      if(db[i][j] > max){
        max = db[i][j];
        maxi = i;
        maxj = j;
      }
      else{
        continue;
      }
    }
  }
  cout << max <<endl;
  cout << maxi+1 << " "<<maxj+1;
}