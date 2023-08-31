#include <iostream>
using namespace std;

int main (){
    int A,B;

    cin >> A >> B;

    if(A+B == 4){
        cout << "2\n";
    }
    if(A+B == 3){
        cout << "3\n";
    }
    if(A+B == 5){
        cout << "1\n";
    }
    return 0;
}