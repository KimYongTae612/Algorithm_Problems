#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int arr[3];
  for (int i = 0; i < 3; i++) {
    cin >> arr[i];
  }
  int sum = arr[0]+arr[1]+arr[2];
  if(sum!=180){cout<<"Error";}
  else if((sum==180)&&(arr[0]==60)&&(arr[1]==60)&&(arr[2]==60)){cout<<"Equilateral";}
  else if((sum==180)&&((arr[0]==arr[1])||(arr[1]==arr[2])||(arr[0]==arr[2]))){cout<<"Isosceles";}
  else if((sum==180)&&(arr[0]!=arr[1])&&(arr[1]!=arr[2])&&(arr[0]!=arr[2])){cout<<"Scalene";}
}
