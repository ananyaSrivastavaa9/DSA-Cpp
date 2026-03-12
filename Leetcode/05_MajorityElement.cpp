// Moore's Voting Algorithm
// time complexity - O(n)


// leetcode solution
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int freq = 0, ans = 0;
//         int n = nums.size();
//         for(int i =0; i < n; i++){
//             if(freq == 0) {
//                 ans = nums[i];
//             }
//             if(ans == nums[i]){
//                 freq++;
//             } else {
//                 freq--;
//             }
//         }
//         return ans;
//     }
// };

// vs code
#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int count = 0;    // to keep track of frequency
    int candidate = 0; // current potential majority element

    for (int num : nums) {  // loop through each number
        if (count == 0) {    // if count is 0, pick a new candidate
            candidate = num;
        }

        // increase count if same as candidate, else decrease
        if (num == candidate) {
            count++;
        } else {
            count--;
        }
    }

    return candidate;  // the majority element
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << "Majority element is: " << majorityElement(nums) << endl;
    return 0;
}


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

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         for(int val : nums) {
//             int frequency = 0;
//             for(int el : nums) {
//                 if(el == val) {
//                     frequency++;
//                 }
//             }
//             if(frequency > n/2) {
//                 return val;
//             }
//         }
//         return -1;
//     }
// };

// int main() {
//     vector<int> nums = {2,2,1,1,1,2,2};
//     Solution obj;
//     int result = obj.majorityElement(nums);
//     cout << "Majority Element: " << result << endl;
//     return 0;
// }

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