#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    if(x >= 0) {
        cout << "Positive\n"<< endl;
        if (x%2 == 0) {
            cout << "and Even\n"<<endl;
        } else {
            cout << "and Odd\n"<<endl;
        }
    }
    return 0;
}