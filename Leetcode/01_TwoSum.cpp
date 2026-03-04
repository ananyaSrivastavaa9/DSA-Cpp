#include<iostream>
using namespace std;
void TwoSum(int nums[], int size, int target) {
    for(int i =0; i < size; i++) {
        for(int j = i+1; j <size; j++) {
            if (nums[i] + nums[j] == target) {
                cout << "Pair found: " << nums[i] << " and " << nums[j] << endl;
                return;
            }
        }
    }
    cout << "No pair found";
}
int main() {
    int nums[] = {1,2,3,4};
    int size = 4;
    int target = 5;
    TwoSum(nums,size,target);
    return 0;
}