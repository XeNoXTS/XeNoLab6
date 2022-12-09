#include<iostream>
using namespace std;

int main(){
    int even = 0;
    int odd = 0;
    int g=1;
    while(g != 0){
        int N;
    cout << "Enter an integer: ";
    cin >> N;
    g = N;
        if(N%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "#Even numbers = " << even-1 << endl;
    cout << "#Odd numbers = " << odd << endl;
    return 0;
}