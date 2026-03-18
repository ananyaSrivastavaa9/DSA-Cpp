#include <iostream>
#include<vector>
using namespace std;
int main(){
    int a = 50;
    int* ptr = &a;
    int** ptr2 = &ptr;
    cout << *(&a) << endl; //(value at address)
    cout << *(ptr) << endl; // same as *(&a)
    cout << ptr << endl; //0x61ff0c
    cout << *(ptr2) << endl; //0x61ff0c
    cout << **(ptr2) << endl; //50
    return 0;
}