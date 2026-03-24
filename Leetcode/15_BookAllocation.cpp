#include<iostream>
#include<vector>
using namespace std;

bool isvalid(vector<int> &arr,int n, int m, int maxpagesallowed) {
    int students = 1;
    int pages = 0;
    for(int i = 0; i < n; i++) {
        if (arr[i] > maxpagesallowed) return false;
        if (pages + arr[i] <= maxpagesallowed) {
            pages += arr[i];
        } else {
            students++;
            pages = arr[i];
        }
    }
    return students <= m;
}

int BookAllocate(vector<int> &arr, int m, int n) {
    if (m > n) {
        return -1;
    }
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    int st = 0;
    int end = sum;
    int ans = -1;
    while(st <= end) {
        int mid = st + (end - st) / 2;
        if (isvalid(arr,n,m,mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }
    return ans;
}
int main() {
    vector <int> arr = {2,1,3,4};
    int m = 2;
    int n = 4;
    cout << BookAllocate(arr,m,n) << endl;
    return 0;
}