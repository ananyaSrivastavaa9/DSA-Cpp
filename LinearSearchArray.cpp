#include <iostream>
using namespace std;
int LS(int arr[], int size, int target){
    for(int i =0; i < size; i++) {
        if(arr[i] == target){ // target found
            return i;
        }
    }
    return -1; //not found
}
int main() {
    int arr[] = {4,2,7,8,1,2,5};
    int target = 8;
    int size = 7;
    cout << LS(arr,size,target) << endl;
    return 0;
}