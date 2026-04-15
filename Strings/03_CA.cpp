#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char str[12];
    cout << "Enter char array : ";
    cin.getline(str,12);

    // to output every individual character
    for(char ch : str) {
        cout << ch << " ";
    }
    cout << endl;

    return 0;
}