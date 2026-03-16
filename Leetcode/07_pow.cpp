// 1st method
// leetcode
// Time complexity - O(logn)

// class Solution {
// public:
//     double myPow(double x, int n) {
        
//         long binform = n;
//         if (n < 0) {
//             x = 1/x;
//             binform = -binform;
//         }
//         double ans = 1;
//         while (binform > 0) {
//             if (binform % 2 == 1) {
//                 ans = ans*x;
//             }
//             x = x*x;
//             binform = binform / 2;
//         }
//         return ans;
//     }
// };


// 2nd method
// vs code
#include <iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        
        long binform = n;
        if (n < 0) {
            x = 1 / x;
            binform = -binform;
        }

        double ans = 1;

        while (binform > 0) {
            if (binform % 2 == 1) {
                ans = ans * x;
            }
            x = x * x;
            binform = binform / 2;
        }

        return ans;
    }
};

int main() {
    Solution sol;

    double x = 2.0;
    int n = 10;

    cout << "Result: " << sol.myPow(x, n) << endl;

    return 0;
}