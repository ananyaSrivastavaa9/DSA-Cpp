#include<iostream>
#include<vector>
using namespace std;
int RecBinarySearch(vector<int> arr, int target, int st, int end) {
   if (st <= end) {
    int mid = st + (end - st)/2;
    if(target < arr[mid]) {
        return RecBinarySearch(arr,target,st,mid-1);
    } else if(target > arr[mid]) {
        return RecBinarySearch(arr,target,mid+1,end);
    } else {
        return mid;
    }
   }
   return -1;
}
int main() {
    vector<int> arr1 = {1,2,4,5,7,8,9};
    int target1 = 9;

    cout << RecBinarySearch(arr1, target1, 0, arr1.size()-1) << endl;

    vector<int> arr2 = {-2,3,5,6,8,9};
    int target2 = 3;

    cout << RecBinarySearch(arr2, target2, 0, arr2.size()-1) << endl;

    return 0;
}