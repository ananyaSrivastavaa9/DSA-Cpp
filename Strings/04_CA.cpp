#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char str[] = "Ananya Srivastava";
    int len = 0;

    // to count the length of the string
    for(int i = 0; i < str[i] != '\0'; i++) {
        len++;
    }
    cout << "length of the string is: " << len << endl;

    return 0;
}