// brute force approach
// Time Complexity - O(n^2)

// #include<iostream>
// #include<vector>
// using namespace std;
// vector <int> PairSum(vector<int>nums, int target) {
//     vector<int>ans;
//     int n = nums.size();
//     for(int i = 0; i < n; i++) {
//         for(int j = i+1; j < n; j++) {
//             if(nums[i] + nums[j] == target) {
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }
// int main() {
//     vector<int>nums = {2,3,7,4,5};
//     int target = 11;
//     vector<int>ans = PairSum(nums, target);
//     cout << ans[0] << "," << ans[1] << endl;
//     return 0;
// }

// Optimised Way
// Time Complexity O(n)
#include<iostream>
#include<vector>
using namespace std;
vector<int> PairSum(vector<int>nums, int target){
    vector<int>ans;
    int n = nums.size();
    int i = 0, j = n-1;
    while(i < j){
        int PairSum = nums[i] + nums[j];
        if (PairSum > target) {
            j--;
        } else if (PairSum < target) {
            i++;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}
int main() {
    vector<int>nums = {2,5,7,8,9};
    int target = 17;
    vector<int>ans = PairSum(nums,target);
    cout << ans[0] << "," << ans[1] << endl;
    return 0;
}