// WAF to print all the unique values in an array

#include <iostream>
using namespace std;
void uniqueval(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j =0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count ++;
            }
        }
        if (count == 1) {
            cout << arr[i] << " ";
        }
    }
}
int main() {
    int arr[] = {1,2,3,4,5,2,3,4,1,3,4,7,8};
    int size = 13;
    uniqueval(arr,size);
    return 0;
}