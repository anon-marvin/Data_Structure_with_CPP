#include <iostream>
using namespace std;


void CheckPrime(int n){
    if(n<=1){
        cout << "Invalid Number" << endl;
    }
    else{
    int count = 1;
    for (int i = 2; i < n;i++){
        if(n%i==0){
            count++;
            break;
        }
    }
    if(count!=1){
        cout << "Not Prime" << endl;
    }
    else
        cout << "Prime" << endl;
}
}

int main() {
    //CheckPrime(3);
    CheckPrime(10);
    return 0;
}