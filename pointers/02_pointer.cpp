#include<iostream>
#include<vector>
using namespace std;
int main() {
    int marks = 55;
    int* ptr1 = &marks;
    cout << ptr1 << endl; //0x61ff04
    cout << &marks << endl; //0x61ff04

    float price = 67.98;
    float* ptr2 = &price;
    cout << &price << endl; //0x61ff00
    cout << ptr2 << endl; //0x61ff00

    return 0;
}