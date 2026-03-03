#include <iostream>
#include <climits>
using namespace std;
int main(){
    int nums[] = {3,8,33,89,63,90,65,789,21};
    int size = 9;
    int largest = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (nums[i] > largest) {
            largest = nums[i];
        }
    }
    cout << "Largest number is: " << largest << endl;
    return 0;
}
