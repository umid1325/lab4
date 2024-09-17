#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    if(x%100 == 0 && x%400 != 0 ) {
        cout << "Not a leap Year"<< endl;
    }else if(x%4==0) {
        cout << "Leap Year" << endl;
    }else{
        cout << "Not a leap Year" << endl;
    }
    return 0;
}