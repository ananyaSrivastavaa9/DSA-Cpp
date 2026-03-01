// WAF to print intersection of 2 array

#include <iostream>
using namespace std;
void intersection(int arr[], int array[], int size1, int size2) {
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr[i] == array[j]) {
                cout << arr[i] << " ";
            }
        }
    }
}
int main() {
    int  arr[] = {1,2,3};
    int array[] = {1,2,4};
    int size1 = 3;
    int size2 = 3;
    intersection(arr,array,size1,size2);
    return 0;
}