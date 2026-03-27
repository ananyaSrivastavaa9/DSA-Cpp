// leetcode - 75

// brute force approach
// time complexity - O(nlogn)
// space complexity - O(1)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void SortColors(vector<int>arr, int n) {
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n; i++) {
        cout << arr[i];
    }
}
int main() {
    vector<int>arr = {2,0,2,1,1,0,1,2,0,0};
    int n = 10;
    SortColors(arr,n);
    return 0;
}