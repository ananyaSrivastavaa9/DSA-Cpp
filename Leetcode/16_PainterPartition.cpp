#include<iostream>
#include<vector>
using namespace std;
void is_possible(vector<int> arr, int m, int n, int maxtime) {

}


int PainterPartition(vector<int> &arr, int n, int m) {
    if (m > n) {
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < n; i ++) {
        sum += arr[i];
    }
    int n = arr.size();
    int st = 0;
    int end = n - 1;
    int ans = -1;
    while(st <= end) {
        int mid = st + (end - st)/2;
        if (is_possible(arr, n, m, mid)) {
            ans = mid
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }
    return ans;
}