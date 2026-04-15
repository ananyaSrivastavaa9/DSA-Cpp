#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char str[] = {'a', 'b', 'c', '\0'};
    // char strr[] = "hello"; // string literals
    cout << str << endl; // abc
    cout << strlen(str) << endl; // 3
    return 0;
}