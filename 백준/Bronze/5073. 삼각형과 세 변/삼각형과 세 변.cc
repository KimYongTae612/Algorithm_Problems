#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int arr[3];
  while (1) {
    for (int i = 0; i < 3; i++) {
      cin >> arr[i];
    }
    sort(arr, arr + 3);
    if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0) {
      break;
    }
    if(arr[2]>=arr[0]+arr[1]){cout<<"Invalid"<<endl;continue;}
    else{
      if(arr[0] == arr[1] && arr[1] == arr[2]){cout<<"Equilateral"<<endl;}
      else if (arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2]) {
        cout << "Isosceles" << endl;}
      else{cout<<"Scalene"<<endl;}
    }
  }
}
