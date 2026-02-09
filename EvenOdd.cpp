#include <iostream>
using namespace std;
bool isEven(int n){
    if (n%2 == 0){
        return true;
    } else {
        return false;
    }
}
int main(){
    int num = 5;
    bool ans = isEven(num);
    if (ans){
        cout << "No is Even";
    } else {
        cout << "No is Odd";
    }
    return 0;
}