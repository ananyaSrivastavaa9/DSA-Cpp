// leetcode - 75

// optimised approach - DUTCH NATIONAL FLAG ALGORITHM
// time complexity - O(n)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size() - 1;

        while(mid <= high) {
            if(nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1) {
                mid++;
            }
            else { // nums[mid] == 2
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    Solution obj;
    obj.sortColors(nums);

    cout << "Sorted array: ";
    for(int x : nums) {
        cout << x << " ";
    }

    return 0;
}

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int low = 0, mid = 0, high = nums.size() - 1;

//         while(mid <= high) {
//             if(nums[mid] == 0) {
//                 swap(nums[low], nums[mid]);
//                 low++;
//                 mid++;
//             }
//             else if(nums[mid] == 1) {
//                 mid++;
//             }
//             else { // nums[mid] == 2
//                 swap(nums[mid], nums[high]);
//                 high--;
//             }
//         }
//     }
// };


// brute force approach

// time complexity - O(nlogn)
// space complexity - O(1)

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void SortColors(vector<int>arr, int n) {
//     sort(arr.begin(), arr.end());
//     for(int i = 0; i < n; i++) {
//         cout << arr[i];
//     }
// }
// int main() {
//     vector<int>arr = {2,0,2,1,1,0,1,2,0,0};
//     int n = 10;
//     SortColors(arr,n);
//     return 0;
// }