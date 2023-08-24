#include <iostream>
using namespace std;
int main() {
    int N, A, B;
    cin >> N >> A >> B;
    int value;
    for (int i = 0; i < N; i++) {
        cin >> value;
        if (A + B == value) {
            cout << i + 1;
        }
    }
}