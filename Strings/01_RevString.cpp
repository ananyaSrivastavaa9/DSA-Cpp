#include <iostream>
using namespace std;

int main() {
    string s = "hello";
    string rev = "";

    for(int i = s.length() - 1; i >= 0; i--) {
        rev += s[i];
    }

    cout << "Reversed string: " << rev;
    return 0;
}
