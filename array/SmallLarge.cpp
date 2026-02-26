#include <iostream>
#include <climits>
using namespace std;
int main(){
    int nums[] = {7,9,74,-8,63,-66,21};
    int size = 7;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i=0; i < size; i++) {
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
    }
    cout << "Smallest is: " << smallest << endl;
    cout << "Largest is: " << largest << endl;
    return 0;
}