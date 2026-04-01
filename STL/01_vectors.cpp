#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>vec;

    // push_back function
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);

    // pop_back function
    vec.pop_back();

    // to print all the numbers
    for(int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    // SIZE FUNCTION
    cout << "size is: " << vec.size() << endl;

    // CAPACITY FUNCTION
    cout << "capacity is: " << vec.capacity() << endl;

    // at() or []
    cout << "at index 2: " << vec[2] << endl;
    cout << "at index 2: " << vec.at(2) << endl;

    // front function
    cout << "Element at front: " << vec.front() << endl;

    // back function
    cout << "Element at back: " << vec.back() << endl;
    return 0;
}