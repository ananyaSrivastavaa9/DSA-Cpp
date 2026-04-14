#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int>vec = {2,5,6,3,8,7};
    reverse(vec.begin(), vec.end());
    for(auto val : vec) {
        cout << val << endl;
    }
    return 0;
}