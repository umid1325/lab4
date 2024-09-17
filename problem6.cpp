#include <iostream>

using namespace std;

int main() {
    float a,b,c,d;
    cin>>a>>b>>c;
    d = pow(b,2)-4*a*c;
    if(d>=0) {
        float x1,x2;
        x1=(-1*b+sqrt(d))/(2*a);
        x2=(-1*b-sqrt(d))/(2*a);
        cout<<"x1="<<x1<<endl;
        cout<<"x2="<<x2;
    }
    else {
        cout<<"No solution";
    }
    return 0;
}