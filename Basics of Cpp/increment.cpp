#include<iostream>
using namespace std;
int increment(int &n){
    n += 1;
    return n;
}
int main(){
    int num = 5;
    int ans = increment(num);
    cout << "No is : " << ans;
}