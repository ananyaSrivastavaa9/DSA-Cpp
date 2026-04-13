// iterators - vec.end()
#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>vec = {1,2,3,4,5};
    cout << "vec.end() is: " << *(vec.end()) << endl;
    return 0;
}