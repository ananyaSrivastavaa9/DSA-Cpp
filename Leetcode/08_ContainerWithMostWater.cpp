// 1st method - optimised
// time complexity - O(n)

// leetcode
// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int maxWater = 0;
//         int lp = 0;
//         int rp = height.size() - 1;
//         while(lp<rp) {
//             int w = rp - lp;
//             int h = min(height[lp], height[rp]);
//             int currentwater = w*h;
//             maxWater = max(maxWater, currentwater);

//             height[lp] < height[rp] ? lp++ : rp--;
//         }
//         return maxWater;
//     }
// };

// vs code
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int lp = 0;
        int rp = height.size() - 1;

        while(lp < rp) {
            int w = rp - lp;
            int h = min(height[lp], height[rp]);
            int currentwater = w * h;

            maxWater = max(maxWater, currentwater);

            height[lp] < height[rp] ? lp++ : rp--;
        }

        return maxWater;
    }
};

int main() {
    Solution sol;
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    cout << "Maximum Water: " << sol.maxArea(height) << endl;

    return 0;
}



// 2st method
// Brute force approach
// time complexity - O(n^2) [Time Limit Exceed]

// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int maxWater = 0;
//         for(int i = 0; i < height.size(); i++) {
//             for(int j = i+1; j < height.size(); j++) {
//                 int width = j - i;
//                 int ht = min(height[i], height[j]);
//                 int currwater = width*ht;
//                 maxWater = max(maxWater, currwater);
//             }
//         }
//         return maxWater;
//     }
// };

// Vs code

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int maxWater = 0;

//         for(int i = 0; i < height.size(); i++) {
//             for(int j = i + 1; j < height.size(); j++) {
//                 int width = j - i;
//                 int ht = min(height[i], height[j]);
//                 int currwater = width * ht;
//                 maxWater = max(maxWater, currwater);
//             }
//         }

//         return maxWater;
//     }
// };

// int main() {
//     Solution sol;
//     vector<int> height = {1,8,6,2,5,4,8,3,7};

//     cout << "Maximum Water: " << sol.maxArea(height) << endl;

//     return 0;
// }