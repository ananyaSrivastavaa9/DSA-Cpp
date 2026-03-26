// Bubble Sorting
// Time Complexity - O(n^2)

#include<iostream>
#include<algorithm>
using namespace std;

// bubble sort function
void bubblesort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

// print array function
int printarr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// main function
int main() {
    int arr[] = {4,1,5,2,3};
    int n = 5;
    bubblesort(arr,n);
    printarr(arr,n);
    return 0;
}