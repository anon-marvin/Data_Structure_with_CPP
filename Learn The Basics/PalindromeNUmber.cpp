#include <iostream>
#include <iomanip>
using namespace std;

void CheckPalindrome(int n)
{
    bool IsPalindrome = false;
    int ReverseNumber = 0;
    int number = n;
    while (n != 0)
    {
        ReverseNumber = ReverseNumber * 10 + n % 10;
        n = n / 10;
    }
    if (ReverseNumber == number)
    {
        IsPalindrome = true;
    }
    cout << boolalpha << IsPalindrome << endl;
}

int main()
{
    // CheckPalindrome(121);
    CheckPalindrome(1211213);
    return 0;
}