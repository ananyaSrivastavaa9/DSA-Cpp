// WAF to swap the max and min number of the array

#include <iostream>
using namespace std;
void SwapMaxMin(int arr[], int size) {
    int maxIndex = 0;
    int minIndex = 0;
    for(int i =0; i < size; i++) {
        if (arr[i] > arr[maxIndex])  
            maxIndex = i;
        if (arr[i] < arr[minIndex]) 
            minIndex = i;
    }
    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;
}
int main() {
    int arr[] = {9,6,3,2,1,7,5};
    int size = 7;
    SwapMaxMin(arr,size);
    for (int i =0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
