#include<iostream>
using namespace std;
int main() {
    string str1;
    // cin >> str1; // input of string
    getline(cin, str1);

    string str2 = "Ananya";

    string str3 = str1 + str2; // concatenation
    cout << str3 << endl;

    cout << (str1 == str2) << endl; // compare

    cout << (str1 < str2) << endl; // greater than or smaller than

    cout << str1.length() << endl; // length of the string
    return 0;
}