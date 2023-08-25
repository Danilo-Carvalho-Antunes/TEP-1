#include<bits/stdc++.h>

using namespace std;

int main(){
    int N;
    string S;
    int count_A = 0 , count_T = 0;

    cin >> N >> S;

    for(auto c:S){
        c=='T' ? ++count_T : ++count_A;
    }

    if(count_T == count_A){
        count_A = S.find_last_of("A") ;
        count_T = S.find_last_of("T");
        if(count_A > count_T){
            cout << "T\n";
        }
        else{
            cout << "A\n";
        }
    }

    if(count_T > count_A){
        cout << "T\n";
    }
    else if(count_A > count_T){
        cout << "A\n";
    }

    
}