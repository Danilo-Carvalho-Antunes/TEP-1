#include <iostream>
using namespace std;

int indivisbles(int *vector,int size) {
    int count_indivisibles = 0,divisible = 0;
    for(int i = 0; i< size; i++){
        for (int j = 0; j < size ; j++){
            if (vector[i] == vector[j]) continue;
            if (vector[i] % vector[j] == 0){
                divisible ++;
                break;
            }
        } 
        if(divisible>0){   
           count_indivisibles = size - divisible;
        }
    }
    return count_indivisibles;
}

int main() {
    int N;
    cin >> N; 
    int numbers[N];
    int number;

    for(int i = 0; i < N ; i++){
        cin >> number;
        numbers[i] = number;
    } 
    cout << indivisbles(numbers,N) << endl;

}