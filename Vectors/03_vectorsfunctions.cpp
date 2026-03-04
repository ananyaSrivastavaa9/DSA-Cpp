#include<iostream>
#include<vector>
using namespace std;
int main() {

    // // size() of the function
    // vector <int> vec = {1,2,3,4,5,6,7,8,9};
    // cout << "Size of the vector is : " << vec.size() << endl;

    // // push_back() function
    vector <int> vec;
    // vec.push_back(9);
    // vec.push_back(5);
    // vec.push_back(6);
    // vec.push_back(7);
    // cout << "After push back: "<< "Size is: " << vec.size() << endl;

    // // pop_back() function
    // vec.pop_back();
    // cout << "After pop back: "<< "Size is: " << vec.size() << endl;

    // // front() function
    // cout << "After front() function: " << vec.front() << endl;

    // // back() function
    // cout << "After back() function: " << vec.back() << endl;

    // // at() function
    // cout << "After at() function: " << vec.at(0) << endl;
    // cout << "After at() function: " << vec.at(1) << endl;
    // cout << "After at() function: " << vec.at(2) << endl;

    //printing all the numbers
    for(int i : vec){
        cout << i << endl;
    }
    return 0;
}