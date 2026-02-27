#include <iostream>
#include <climits>
using namespace std;
int main(){
    int nums[] = {7,9,74,-8,63,-66,21};
    int size = 7;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    // int SmallestIndex = -1; to find index use the comment part
    // int LargestIndex = -1;
    for (int i=0; i < size; i++) {
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
        // if (nums[i] < smallest) {
        //     smallest = nums[i];
        //     SmallestIndex = i;
        // }
        // if (nums[i] > largest) {
        //     largest = nums[i];
        //     LargestIndex = i;
        // }
    }
    cout << "Smallest is: " << smallest << endl; //SmallestIndex
    cout << "Largest is: " << largest << endl; //LargestIndex
    return 0;
}