#include<bits/stdc++.h>

using namespace std;

int main(){
    int N;
    string S;

    cin >> N >> S;

    if( S.find('x') == string::npos and S.find('o') != string::npos){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
}