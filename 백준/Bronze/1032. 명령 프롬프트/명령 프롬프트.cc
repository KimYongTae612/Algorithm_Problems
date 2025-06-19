#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    string str;
    string answer;
    cin >> answer;
  for(int i=0;i<N-1;i++){
    cin >> str;
    for(int j=0;j<str.size();j++){
      if(str[j]!=answer[j]){answer[j]='?';}
    }
  }
  cout << answer;
}