#include <iostream>
using namespace std;
void Reversearr(int arr[], int start, int end){
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main() {
    int arr[] = {4,2,7,8,1,2,5};
    int start = 0;
    int end = 6;
    Reversearr(arr,start,end);
    for(int i =0; i <= end; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}