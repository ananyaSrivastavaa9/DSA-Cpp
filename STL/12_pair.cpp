#include<iostream>
#include<vector>
using namespace std;
int main() {
    pair<int,int>p = {3,4};
    cout << p.first << endl;
    cout << p.second << endl;

    cout << "  " << endl;

    pair<int, pair<char,int>> q = {5, {'a', 4}};
    cout << q.first << endl;
    cout << q.second.first << endl;
    cout << q.second.second << endl;

    cout << "  " << endl;

    // vector of pair
    vector<pair<int,int>> vec = {{3,4}};
    vec.push_back({4,3}); // insert
    vec.emplace_back(4,3); // in-place objects create
    for(auto p : vec) {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}