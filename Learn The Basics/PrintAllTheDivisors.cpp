#include <iostream>
#include <vector>
using namespace std;

void Divisors(int n){
    vector<int> arr;
    for (int i = 0; i <= n; i++)
    {
        if(n%i==0){
            arr.push_back(i);
        }
    }
    for (int j = 0; j < arr.size();j++){
        cout << arr[j] << " ";
        if(j==arr.size()-1){
            cout << endl;
        }
    }
}

int main() {
    Divisors(36);
    Divisors(97);
    return 0;
}