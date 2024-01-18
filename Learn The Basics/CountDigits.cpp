#include <iostream>
using namespace std;



void CountDigits(int n){
    int count = 0;
    while (n!=0)
    {
        n = n / 10;
        count++;
    }
    cout << "CountDigits : " << count << endl;
}

int main()
{
    CountDigits(122);
    CountDigits(98);
    CountDigits(21211);
    CountDigits(2);
    return 0;
}