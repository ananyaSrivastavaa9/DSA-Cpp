#include<iostream>
#include<vector>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    cout << arr << endl; // arr gives address of 0th index (i.e., &arr[0])
    cout << *arr << endl; // *arr means value at that address → arr[0] = 1
    return 0;
}