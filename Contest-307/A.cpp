#include <stdlib.h>
#include <bits/stdc++.h>
 
using namespace std;

int main(){

    int N;
    cin >> N;
    int weeks[N];
    int number;
    int steps = 0;
    int days = 0;

    for(int i=0; i<N*7;i++){
        cin >> number;
        steps += number;
        days ++;
        if(days == 7){
            weeks[i/7] = steps;
            days = 0;
            steps = 0;
        }
    }

    for(int i = 0 ; i < N ; i++){
        cout << weeks[i]<<' ';
    }
}