#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    int cnt=0;
    string data;
    cin >> N;

    for(int i=0; i<N; i++){
        cin >> data;
        if(data.length() <= 2){
            continue;
        }
        else{
            for(int j=0;j<data.length()-1;j++){
                if(data[j] != data[j+1]){
                    if(data.find(data[j],j+2) != string::npos){
                        cnt++;
                        break;
                    }
                }
            }
        }
    }
    cout << N-cnt;
}