// Single Element in a Sorted Array
// Leetcode = 540
// Brute Force Approach
// Time complexity - O(n)

#include<iostream>
#include<vector>
using namespace std;
int SE(vector<int>arr) {
    int n = arr.size();

    // edge cases
    if(n==0) {
        return 0;
    }
    if(arr[0] != arr[1]) {
        return 0;
    }
    if(arr[n-1] != arr[n-2]) {
        return n-1;
    }
    for(int i = 0; i < n; i++) {
        if(arr[i-1] != arr[i] && arr[i] != arr[i+1]) {
            return i;
        }
    }
    return -1;
}
int main() {
    vector<int>arr = {1,1,2,3,3,4,4,5,5};
    cout << SE(arr) << endl;
    return 0;
}

// optimised approach
// time complexity - 0(n)
// space complexity - 0(1)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();
        int st = 0;
        int end = n - 1;

        if(n == 1) {
            return arr[0];
        }

        while(st <= end) {
            int mid = st + (end - st) / 2;

            if(mid == 0 && arr[0] != arr[mid+1]) {
                return arr[mid];
            }
            if(mid == n-1 && arr[n-1] != arr[n-2]) {
                return arr[mid];
            }

            if(arr[mid] != arr[mid - 1] && arr[mid] != arr[mid+1]) {
                return arr[mid];
            }

            if (mid % 2 == 0) {
                if(arr[mid] == arr[mid+1]) {
                    st = mid + 2;
                } else {
                    end = mid - 1;
                }
            } 
            else {
                if(arr[mid-1] == arr[mid]) {
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

    vector<int> arr = {1,1,2,2,3,4,4}; // test case

    cout << obj.singleNonDuplicate(arr) << endl;

    return 0;
}

// leetcode

// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& arr) {
//         int n = arr.size();
//         int st =0;
//         int end = n - 1;
//         if(n==1) {
//             return arr[0];
//         }
//         while(st <= end) {
//             int mid = st + (end - st) / 2;
//             if(mid == 0 && arr[0] != arr[mid+1]) {
//                 return arr[mid];
//             }
//             if(mid == n-1 && arr[n-1] != arr[n-2]) {
//                 return arr[mid];
//             }
//             if(arr[mid] != arr[mid - 1] && arr[mid] != arr[mid+1]) {
//                 return arr[mid];
//             }
//             if (mid % 2 == 0) {
//                 if(arr[mid] == arr[mid+1]) {
//                     st = mid + 2;
//                 } else {
//                     end = mid - 1;
//                 }
//             }
//             if (mid % 2 != 0) {
//                 if(arr[mid-1] == arr[mid]) {
//                     st = mid+1;
//                 } else {
//                     end = mid -1;
//                 }
//             }
//         }
//         return -1;
//     }
// };