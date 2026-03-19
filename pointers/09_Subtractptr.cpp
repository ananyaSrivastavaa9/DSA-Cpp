#include<iostream>
#include<vector>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5};
    int* ptr2 = arr;
    int* ptr1 = ptr2 + 2;
    cout << ptr1 << endl;
    cout << ptr2 << endl;
    cout << ptr1 - ptr2 << endl; // 2 (number of elements apart)
    return 0;
}