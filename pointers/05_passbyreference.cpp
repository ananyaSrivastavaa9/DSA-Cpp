#include<iostream>
#include<vector>
using namespace std;

// method 1
void ChangeA(int* ptr){ //Pass by reference using pointers
    *ptr = 20;
}
int main(){
    int a = 10;
    ChangeA(&a);
    cout << a << endl; //20
    return 0;
}

// method 2

// void ChangeA(int &b){ //Pass by reference using Alias
//     b = 20;
// }
// int main(){
//     int a = 10;
//     ChangeA(a);
//     cout << a << endl; //20
//     return 0;
// }