// leetcode - 31
// Optimal Approach
// Time complexity - O(n)
// Space complexity - O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int pivot = -1;

        // Step 1: Find pivot
        for(int i = n - 2; i >= 0; i--) {
            if(nums[i] < nums[i+1]) {
                pivot = i;
                break;
            }
        }

        // Step 2: If no pivot
        if(pivot == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }
        
        // Step 3: Find next greater element
        for(int i = n - 1; i > pivot; i--) {
            if(nums[i] > nums[pivot]) {
                swap(nums[i], nums[pivot]);
                break;
            }
        }

        // Step 4: Reverse right part
        int i = pivot + 1;
        int j = n - 1;
        while(i <= j) {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 5, 4};

    Solution obj;
    obj.nextPermutation(nums);

    cout << "Next Permutation: ";
    for(int x : nums) {
        cout << x << " ";
    }

    return 0;
}

// leetcode solution

// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         int n = nums.size();
//         int pivot = -1;
//         for(int i = n - 2; i >= 0; i--) {
//             if(nums[i] < nums[i+1]) {
//                 pivot = i;
//                 break;
//             }
//         }

//         if(pivot == -1) {
//             reverse(nums.begin(), nums.end());
//             return;
//         }
        
//         for(int i = n - 1; i > pivot; i--) {
//             if(nums[i] > nums[pivot]) {
//                 swap(nums[i], nums[pivot]);
//                 break;
//             }
//         }
//         int i = pivot + 1;
//         int j = n - 1;
//         while(i <= j) {
//             swap(nums[i], nums[j]);
//             i++;
//             j--;
//         }
//     }
// };