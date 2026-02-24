#include <iostream>
using namespace std;
int main() {
    int size = 10;
    int marks[size];

    // input
    for (int i = 0; i < size; i++){
        cin >> marks[i];
    }

    // output
    cout << "[";
    for (int i = 0; i < size; i++) {
        cout << marks[i];
        if (i != size -1) {
            cout << ",";
        }
    }
    cout << "]";
    
    return 0;
}