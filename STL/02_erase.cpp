#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>vec = {1,2,3,4,5};

    // ERASE function
    
    // vec.erase(vec.begin() + 2);
    // for (int val : vec) {
    //     cout << val << " ";
    // }
    // cout << endl;

    // to delete a range of elements
    // vec.erase(start,end)

    vec.erase(vec.begin()+1, vec.begin()+3);
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;    

    return 0;
}