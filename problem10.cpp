#include <iostream>

using namespace std;

int main() {
    double w1,p1,w2,p2,c1,c2;
    cout<<"Enter weight and price for package 1: ";
    cin>>w1>>p1;
    cout<<"Enter weight and price for package 2: ";
    cin>>w2>>p2;
    c1 = p1/w1;
    c2 = p2/w2;

    if(c1==c2) {
        cout<<"2 Packages have the same cost"<<endl;
    }
    else if(c2>c1) {
        cout<<"Package 1 is better to buy"<<endl;
    } else {
        cout<<"Package 2 is better to buy"<<endl;
    }
    return 0;
}