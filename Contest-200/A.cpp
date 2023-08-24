#include <iostream>
using namespace std;
int main() {
    int A, B, C;
    cin >> A >> B >> C;
    int value;


    for(int i = 0; i < 1000 ; i++ ){
        value = i * C;
        if(A > value && B < value ){
            cout << value;
            cout << "\n";
            break;
        }
        if(B > value && A < value ){
            cout << value;
            cout << "\n";
            break;
        }
    }

    if(A >! value || B <! value ){
        cout << "-1\n";
    }
        
}