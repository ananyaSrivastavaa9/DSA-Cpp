#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int arr[5] = {1,5,8,2,6};
    sort(arr,arr+5);
    for(auto val : arr) {
        cout << val << " "; //1 2 5 6 8 
    }
    cout << endl;

    vector<int>vec = {5,7,2,9,8};
    sort(vec.begin(), vec.end());
    for(int values : vec) {
        cout << values << " "; //2 5 7 8 9
    }
    cout << endl;

    int array[6] = {1,5,8,2,6,3};

    // to sort in reverse order
    sort(array, array+6, greater<int>());

    for(auto val : array) {
        cout << val << " "; //8 6 5 3 2 1
    }
    cout << endl;

    vector<int>vector = {5,7,2,9,8};
    sort(vector.begin(), vector.end(), greater<int>());
    for(int values : vector) {
        cout << values << " "; //9 8 7 5 2
    }
    cout << endl;

    return 0;
}