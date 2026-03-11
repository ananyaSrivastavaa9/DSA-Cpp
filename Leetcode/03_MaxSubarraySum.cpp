// By Brute-Force Approach
// Time Complexity - O(n^2)
// for O(n) time complexity apply kadane's Algorithm
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int MaxSum = INT_MIN;
    for(int start = 0; start < n; start++) {
        int current_sum = 0;
        for(int end = start; end < n; end++) {
            current_sum += arr[end];
            MaxSum = max(current_sum, MaxSum);
        }
    }
    cout << "Maximum Subarray Sum: " << MaxSum << endl;
    return 0;
}
