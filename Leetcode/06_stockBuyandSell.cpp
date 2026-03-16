// 1st method
// leetcode
// time complexity - O(n)

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int maxProfit = 0, bestbuy = prices[0];
//         for(int i =1; i < prices.size(); i++) {
//             if(prices[i] > bestbuy) {
//                 maxProfit = max(maxProfit, prices[i] - bestbuy);
//             }
//             bestbuy = min(bestbuy, prices[i]);
//         }
//         return maxProfit;
//     }
// };

// vs code
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0, bestbuy = prices[0];

        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] > bestbuy) {
                maxProfit = max(maxProfit, prices[i] - bestbuy);
            }
            bestbuy = min(bestbuy, prices[i]);
        }

        return maxProfit;
    }
};

int main() {
    Solution sol;

    vector<int> prices = {7, 1, 5, 3, 6, 4};

    int result = sol.maxProfit(prices);

    cout << "Maximum Profit: " << result << endl;

    return 0;
}