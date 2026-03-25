#include<iostream>
#include<vector>
#include<climits>
using namespace std;
bool is_possible(vector<int> &arr, int n, int m, int maxallowedtime) {
    int painter = 1;
    int time = 0;
    for(int i = 0; i < n; i++) {
        if (time + arr[i] <= maxallowedtime) {
            time += arr[i];
        } else {
            painter++;
            time = arr[i];
        }
    }
    if (painter <= m) {
        return true;
    } else {
        return false;
    }
}

int PainterPartition(vector<int>arr, int n, int m) {
    int sum = 0;
    int maxVal = INT_MIN;
    if (m > n) {
        return false;
    }
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }
    int st = maxVal;
    int end = sum;
    int ans = -1;
    while(st <= end) {
        int mid = st + (end - st) / 2;
        if (is_possible(arr,n,m,mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector <int> arr = {40,30,10,20};
    int m = 2;
    int n = 4;
    cout << PainterPartition(arr,n,m) << endl;
    return 0;
}