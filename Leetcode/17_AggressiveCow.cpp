#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
bool is_possible(vector<int> &arr, int n, int minAllowedDistance, int c) {
    int cows = 1;
    int last_Stall_Position = arr[0];
    for(int i = 1; i < n; i++) {
        if((arr[i] - last_Stall_Position >= minAllowedDistance)) {
            cows++;
            last_Stall_Position = arr[i];
        }
        if(cows == c) {
            return true;
        }
    }
    return false;
}
int AggressiveCow(vector<int>arr, int n, int c) {
    sort(arr.begin(), arr.end());
    if (c > n) {
        return -1;
    }
    int st = 1;
    int end = arr[n-1] - arr[0]; //maximum possible distance (8) - in this case
    int ans = -1;

    // int minDistance = 1;
    // int minVal = INT_MAX;
    // int maxVal = INT_MIN;
    // for(int i = 0; i < n; i++) {
    //     minVal = min(minVal, arr[i]);
    //     maxVal = max(maxVal, arr[i]);
    // }
    // int maxdistance = maxVal - minVal;
    // int st = minDistance; 
    // int end = maxdistance;
    
    while(st  <=end) {
        int mid = st + (end - st)/2;
        if (is_possible(arr,n,mid,c)) {
            ans = mid;
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1,2,8,4,9};
    int n = 5;
    int c = 3;
    cout << AggressiveCow(arr,n,c) << endl;
    return 0;
}