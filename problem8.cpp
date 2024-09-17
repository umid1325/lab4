#include <iostream>

using namespace std;

int main() {
    char c;
    cin>>c;
    if(c>=65 && c<=90) {
        cout<<"Upper Case";
    } else if(c>=97 && c<=122) {
        cout<<"Lower Case";
    } else {
        cout<<"Not a character";
    }
    return 0;
}