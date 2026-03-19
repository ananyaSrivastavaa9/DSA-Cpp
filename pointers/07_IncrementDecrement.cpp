#include<iostream>
#include<vector>
using namespace std;
int main() {
    // int a = 10;
    // int* ptr = &a;
    // cout << ptr << endl; //0x61ff08
    // ptr++; //Increment
    // cout << ptr << endl; //0x61ff0c
    // return 0;

    int a = 10;
    int* ptr = &a;
    cout << ptr << endl; //0x61ff08
    ptr--; //Decrement
    cout << ptr << endl; //0x61ff04
    return 0;
}

