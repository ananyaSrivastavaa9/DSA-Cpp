#include<iostream>
#include<vector>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5};
    int* ptr1 = &arr[1];
    int* ptr2 = &arr[3];
    cout << ptr1<< endl;
    cout << ptr2<< endl;
    cout << (ptr1 < ptr2) << endl; //1 (true)
    cout << (ptr1 <= ptr2) << endl; //1
    cout << (ptr1 > ptr2) << endl; //0
    cout << (ptr1 >= ptr2) << endl; //0
    cout << (ptr1 == ptr2) << endl; //0
    cout << (ptr1 != ptr2) << endl; //1
    return 0;
}