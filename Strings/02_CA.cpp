#include<iostream>
#include<cstring>
using namespace std;
int main() {

    // input - output
    char str[100];
    cout << "Enter char array : ";

    // cin >> str; // We cnanot store a sentence using cin

    cin.getline(str,100); // we use this to store a sentence

    cout << "Output is : " << str << endl;

    return 0;
}