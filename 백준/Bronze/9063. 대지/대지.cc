#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  int* X = new int[N];
  int* Y = new int[N];

  for(int i=0;i<N;i++){
    cin >> X[i] >> Y[i];
  }

  int max_x = X[0];
  int max_y = Y[0];
  int min_x = X[0];
  int min_y = Y[0];

  for(int j=1;j<N;j++){
    if(max_x < X[j]){max_x=X[j];}
    if(max_y < Y[j]){max_y=Y[j];}
    if(min_x > X[j]){min_x=X[j];}
    if(min_y > Y[j]){min_y=Y[j];}
  }

  int area;
  area = (max_x - min_x) * (max_y - min_y);
  cout << area << endl;

}
