// iterators - vec.begin()
#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>vec = {1,2,3,4,5};
    cout << "vec.begin() is: " << *(vec.begin()) << endl;
    return 0;
}