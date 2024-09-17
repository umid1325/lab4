#include <iostream>

using namespace std;

int main() {
    float a,b,c,t;
    cin>>a>>b>>c;
    t=a+b+c;
    if(t==180) {
        cout<<"The triangle is valid";
    }else {
        cout<<"The triangle is not valid";
    }
    return 0;
}
