#include <iostream>
using namespace std;

void ReverseNumber(int n){
    int reverseDigit = 0;
    while(n!=0){
        reverseDigit = reverseDigit * 10 + n % 10;  
        n = n / 10;
    }
    cout << "Revesed Number : " << reverseDigit << endl;
}

int main() {
    ReverseNumber(21);
    ReverseNumber(1);
    ReverseNumber(234);
    ReverseNumber(01);
    return 0;
}