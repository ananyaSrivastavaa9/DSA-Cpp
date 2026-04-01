// 05_empty.cpp
#include<iostream>
#include<vector>
using namespace std;
int main() {

    vector<int>vec = {1,2,3,4,5};
    cout << vec.empty() << endl;
    vec.clear();
    cout << vec.empty() << endl;
    
    return 0;
}