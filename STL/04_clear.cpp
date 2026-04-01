#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>vec = {1,2,3,4,5};

    // CLEAR function
    vec.clear();
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;  

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    return 0;
}