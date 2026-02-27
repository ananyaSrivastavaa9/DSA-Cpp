#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "enter value of n: ";
    cin >> n;
    int i = 2;
    bool is_prime = true;
    while(i<=(n-1)){
        if (n%i==0){
            is_prime = false;
            break;
        } else {
            i = i + 1;
        }
    }
    if (is_prime && n > 1) {
        cout << "Number is prime";
    } else {
        cout << "Number is non-prime";
    }
    return 0;
}