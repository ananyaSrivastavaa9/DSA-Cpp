#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
void selectionsort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int SmallestElement = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[SmallestElement]) {
                SmallestElement = j;
            }
        }
        swap(arr[i], arr[SmallestElement]);
    }
}
int printarr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[] = {4,1,5,2,3};
    int n = 5;
    selectionsort(arr,n);
    printarr(arr,n);
    return 0;
}