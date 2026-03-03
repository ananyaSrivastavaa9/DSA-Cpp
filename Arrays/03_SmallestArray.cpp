#include <iostream>
#include <climits>
using namespace std;
int main() {
    int nums[] = {5,2,8,45,-2,93,-55};
    int size = 7;
    int smallest = INT_MAX;
    for (int i =0; i < size; i++) {
        if (nums[i] < smallest) {
            smallest = nums[i];
        }
    }
    cout << "Smallest value is: " << smallest << endl;
    return 0;
}
