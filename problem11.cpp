#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "Enter a three digit number: ";
    cin>>a;
    int digit1 = a/100;
    int digit2 = a%10;

    if(digit1==digit2) {
        cout<<a<<" is a palindrome";
    } else {
        cout<<a<<" is not a palindrome";
    }
    return 0;
}