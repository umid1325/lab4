#include <iostream>

using namespace std;

int main() {
    float x,y,d;
    cin>>x>>y;\
    d = sqrt(pow(x,2)+pow(y,2));
    if(d<=10) {
        cout<<"Point ("<<x<<","<<y<<") is in circle"<<endl;
    }else {
        cout<<"Point ("<<x<<","<<y<<") is not in circle"<<endl;
    }
    return 0;
}