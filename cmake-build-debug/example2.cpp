#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    cin >>a>>b>>c;
    if (a>b&&a>c) {
        cout<<a<<" is the largest\n"<<endl;
    }else if (b>c) {
        cout<<b<<" is the largest\n"<<endl;
    }else {
        cout<<c<<" is the largest\n"<<endl;
    }
    return 0;
}