// Time complexity - O(n)
// Optimised way
// Improved Space Complexity - O(1)
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);

        // Prefix
        for(int i = 1; i < n; i++){
            ans[i] = ans[i-1] * nums[i-1];
        }

        // Suffix
        int suffix = 1;
        for(int i = n-2; i >= 0; i--){
            suffix *= nums[i+1];
            ans[i] *= suffix;
        }

        return ans;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1,2,3,4};

    vector<int> result = obj.productExceptSelf(nums);

    for(int x : result){
        cout << x << " ";
    }

    return 0;
}

// Leetcode (238 Ques)

// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();
//         vector<int>ans(n,1);
//         for(int i = 1; i <n; i++){
//             ans[i] = ans[i-1]*nums[i-1];
//         }
//         int suffix = 1;
//         for(int i = n-2; i >= 0; i--){
//             suffix *= nums[i+1];
//             ans[i] *= suffix;
//         }
//         return ans;
//     }
// };