//Time Complexity - O(logn)
//optimised way
//Leetcode - 33

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& A, int target) {
        int st = 0;
        int end = A.size() - 1;

        while(st <= end) {
            int mid = st + (end - st) / 2;

            if (A[mid] == target) {
                return mid;
            }

            // Left half sorted
            if (A[st] <= A[mid]) {
                if (A[st] <= target && target < A[mid]) {
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }
            }
            // Right half sorted
            else {
                if (A[mid] < target && target <= A[end]) {
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};

int main() {
    Solution obj;

    vector<int> arr = {4,5,6,7,0,1,2};
    int target = 0;

    int result = obj.search(arr, target);

    if(result != -1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not found" << endl;
    }

    return 0;
}

//leetcode solution

// class Solution {
// public:
//     int search(vector<int>& A, int target) {
//         int st = 0;
//         int end = A.size() - 1;
//         while(st <= end) {
//             int mid = st + (end-st)/2;
//             if (A[mid] == target) {
//                 return mid;
//             }
//             if (A[st] <= A[mid]) { //left sorted
//                 if (A[st] <= target && target <= A[mid]) {
//                     end = mid-1;
//                 } else {
//                     st = mid + 1;
//                 }
//             } else {
//                 if (A[mid] <= target && target <= A[end]) {
//                     st = mid + 1;
//                 } else {
//                     end = mid -1;
//                 }
//             }
//         }
//         return -1;
//     }
// };