#include<iostream>
using namespace std;
int main() {
    string str = "Hello My name is Ananya";

    // loop 1
    for(int i =0; i < str.length(); i++) {
        cout << str[i] << " ";
    }
    cout << endl;

    // loop 2 
    for(char ch : str) {
        cout << ch << " ";
    }
    cout << endl;
    return 0;
}