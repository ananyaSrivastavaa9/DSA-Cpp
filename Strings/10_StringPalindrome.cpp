#include<iostream>
using namespace std;
int main() {
    string str;
    cout << "Enter string: ";
    cin >> str;
    int st = 0;
    int end = str.size() - 1;
    bool ispalindrome = true;
    while(st < end) {
        if(str[st] != str[end]) {
            bool ispalindrome = false;
            break;
        }
        st++;
        end--;
    }
    if(ispalindrome) {
        cout << "string is palindrome";
    } else {
        cout << "String is not a plaindrome";
    }
    return 0;
}