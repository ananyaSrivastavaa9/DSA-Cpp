// calculate simple interest from principal(p), rate(r) and time(t)
#include<iostream>
using namespace std;
int main(){
    float p;
    cout <<"Enter value of P: ";
    cin >> p;
    float r;
    cout <<"Enter value of R: ";
    cin >> r;
    float t;
    cout <<"Enter value of T: ";
    cin >> t;
    float SI;
    SI = (p * r * t) / 100;
    cout <<"Result is: " << SI;
    return 0;
}