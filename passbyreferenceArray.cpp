#include <iostream>
using namespace std;
void changearr(int arr[], int size) {
// in function
    for(int i = 0; i < size; i++) {
        arr[i] = 2*arr[i];
    }
}
int main() {
    int arr[] = {1,2,3};
    // in main function
    changearr(arr,3);
    for(int i =0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}