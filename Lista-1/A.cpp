#include <iostream>
using namespace std;

int mdc(int x, int y){
    if(y>x){
        int exch = x;
        x = y;
        y = exch;
    }
    int multiple = x;
    int rest = y;
    while(rest != 0){
        if(multiple < rest) {
            multiple = rest;
        }
        else{
            multiple = multiple/rest;
        }
        rest = multiple%rest;
    }
    return multiple;
}

int main() {
   cout << mdc(9,6)<< endl;
   cout << mdc(17,2023)<< endl;
}



// mdc 7 e 2023

// 2025 = 7 * 289 + 2;
// 289 = 2 * 144 + 1;
// 144 = 1 * 144 + 0;

// 9 = 6 * 1 + 3;
// 6 = 3 * 2 + 0;
