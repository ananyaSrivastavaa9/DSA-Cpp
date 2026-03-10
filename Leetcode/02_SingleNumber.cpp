#include<iostream>
#include<vector>
using namespace std;
int SingleNumber(vector<int> &vec) {
    int ans = 0;
    for(int val : vec) {
        ans = ans ^ val;
    }
    return ans;
}
int main() {
    vector<int> nums = {1,1,2,3,2,4,4};
    int result = SingleNumber(nums);
    cout << "Single number is: " << result << endl;
    return 0;
}