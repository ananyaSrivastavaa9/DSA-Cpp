#include<iostream>
#include<vector>
using namespace std;
int LinearSearch(vector <int> vec, int target){
    for(int i =0; i < vec.size(); i++) {
        if(vec[i] == target) {
            return i;
            cout << i << endl;
        }
    }
    return -1;
}
int main() {
    vector<int>vec = {1,8,9,5,6,2};
    int target = 5;
    int result = LinearSearch(vec, target);
    if(result != -1)
        cout << "found" << endl << result ;
    else
    cout << "not found";
    return 0;
}