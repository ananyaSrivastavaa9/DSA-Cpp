// Brute Force Approach
// Time Complexity - O(n^2)
// Approach 1

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         for(int val : nums) {
//             int frequency = 0;
//             for(int el : nums) {
//                 if(el == val) {
//                     frequency ++;
//                 }
//             }
//             if(frequency > n/2) {
//                 return val;
//             }
//         }
//         return -1;
//     }
// };

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for(int val : nums) {
            int frequency = 0;
            for(int el : nums) {
                if(el == val) {
                    frequency++;
                }
            }
            if(frequency > n/2) {
                return val;
            }
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {2,2,1,1,1,2,2};
    Solution obj;
    int result = obj.majorityElement(nums);
    cout << "Majority Element: " << result << endl;
    return 0;
}

// Sorting 
// Time Complexity - O(nlogn)
// Approach 2

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         sort(nums.begin(), nums.end());
//         int freq = 1, ans = nums[0];
//         for(int i = 1; i < n; i++) {
//             if(nums[i] == nums[i-1]) {
//                 freq++;
//             } else {
//                 freq = 1;
//                 ans = nums[i];
//             }
//             if(freq > n/2) {
//                 return ans;
//             }
//         }
//         return ans;
//     }
// };

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         sort(nums.begin(), nums.end());
//         int freq = 1, ans = nums[0];
//         for(int i = 1; i < n; i++) {
//             if(nums[i] == nums[i-1]) {
//                 freq++;
//             } else {
//                 freq = 1;
//                 ans = nums[i];
//             }
//             if(freq > n/2) {
//                 return ans;
//             }
//         }
//         return ans;
//     }
// };
// int main() {
//     vector<int> nums = {2,2,1,1,1,2,2};
//     Solution obj;
//     int result = obj.majorityElement(nums
//     cout << "Majority Element: " << result << endl;
//     return 0;
// }