// leetcode - 852
// Brute force approach
// Time complexity - O (n)

// #include<iostream>
// #include<vector>
// using namespace std;
// int PeakIndex(vector<int>arr) {
//     int maxIndex = 0;
//     for(int i =1; i <= arr.size(); i++) {
//         if(arr[i] > arr[maxIndex]) {
//             maxIndex = i;
//         }
//     }
//     return maxIndex;
// }
// int main() {
//     vector<int>arr1 = {0,3,8,9,5,2};
//     cout << PeakIndex(arr1) << endl;
//     return 0;
// }

//Optimised Approach
//Time complexity - O(logn)
//Binary Search

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int st = 1;
        int end = n - 2;

        while(st <= end) {
            int mid = st + (end - st) / 2;

            if (arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]) {
                return mid;
            }

            if (arr[mid-1] < arr[mid]) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }
};

int main() {
    Solution obj;
    vector<int> arr = {1, 3, 5, 7, 6, 4, 2};

    cout << obj.peakIndexInMountainArray(arr) << endl;

    return 0;
}

//Leetcode

// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int n = arr.size();
//         int st = 1;
//         int end = n-2;
//         while(st <= end) {
//             int mid = st + (end - st) /2;
//             if (arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]) { 
//                 return mid;
//             }
//             if (arr[mid-1] < arr[mid]) {
//                 st = mid+1;
//             } else {
//                 end = mid-1;
//             }
//         }
//         return -1;
//     }
// };