#include <math.h>
#include <cmath>
#include <iostream>
using namespace std;

bool isprime(int p) {
    for (int i = 2; i <= sqrt(p); i++)
        if (p % i == 0) return false;
    return true;
}

int main() {
    int x;
    bool prime = false;
    cin >> x;
    while(prime == false){
        if(isprime(x) == 1) prime = true;
        else x++;
    }
    cout << x << endl;

}