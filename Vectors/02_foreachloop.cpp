#include<iostream>
#include<vector>
using namespace std;

int main() {
    
    // vector<int>vec(5,1); //index - 5, value at every index - 1
    // for(int i : vec){
    //     cout << i << endl;
    // }

    vector<char> vec= {'a', 'n', 'a', 'n', 'y', 'a'}; //for char use singlle quotes
    for(char i : vec) {
        cout << i << endl;
    }

    return 0;
}   