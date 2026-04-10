#include <iostream>
using namespace std;
int main() {
    int marks[] = {11,24,89,57,73,78};

    // print the size of the array (int data type - 4 bytes)
    cout << sizeof(marks) << endl;

    // actual size of array
    cout << sizeof(marks) / sizeof(int) << endl;

    // loop : 0 to size - 1
    int size = 6;
    cout << "[";
    for (int i = 0; i < size; i++){
        cout << " " << marks[i];
    }
    cout << "]";
    return 0;
}
