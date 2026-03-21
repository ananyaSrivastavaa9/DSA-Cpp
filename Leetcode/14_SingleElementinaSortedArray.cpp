// Single Element in a Sorted Array
// Leetcode = 540
// Brute Force Approach
// Time complexity - O(n)

#include<iostream>
#include<vector>
using namespace std;
int SE(vector<int>arr) {
    int n = arr.size();

    // edge cases
    if(n==0) {
        return 0;
    }
    if(arr[0] != arr[1]) {
        return 0;
    }
    if(arr[n-1] != arr[n-2]) {
        return n-1;
    }
    for(int i = 0; i < n; i++) {
        if(arr[i-1] != arr[i] && arr[i] != arr[i+1]) {
            return i;
        }
    }
    return -1;
}
int main() {
    vector<int>arr = {1,1,2,3,3,4,4,5,5};
    cout << SE(arr) << endl;
    return 0;
}