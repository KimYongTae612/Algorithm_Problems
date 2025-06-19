#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int layer = 1;
    int maxRoom = 1;

    while (maxRoom < N) {
        maxRoom += 6 * layer;
        layer++;
    }

    cout << layer;
}