#include<iostream>
#include<vector>
using namespace std;
int BinarySearch(vector<int> arr, int target) {
    int n = arr.size();
    int st = 0;
    int end = n -1;
    while(st <= end) {
        int mid = st + (end - st) / 2;
        if (target > arr[mid]){
            st = mid+1;
        } else if (target < arr[mid]) {
            end = mid-1;
        } else {
            return mid;
        }
    }
    return -1;
}
int main() {
    vector<int> arr1 = {1,2,4,5,7,8,9};
    int target1 = 9;

    cout << BinarySearch(arr1, target1) << endl;

    vector<int> arr2 = {-2,3,5,6,8,9};
    int target2 = 3;

    cout << BinarySearch(arr2, target2) << endl;

    return 0;
}