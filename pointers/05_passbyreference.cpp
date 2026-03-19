#include<iostream>
#include<vector>
using namespace std;
void ChangeA(int* ptr){ //Pass by reference
    *ptr = 20;
}
int main(){
    int a = 10;
    ChangeA(&a);
    cout << a << endl; //20
    return 0;
}