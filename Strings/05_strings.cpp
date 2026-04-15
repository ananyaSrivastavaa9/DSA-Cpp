#include<iostream>
using namespace std;
int main() {
    string str = "Ananya"; // contiguous in memory
    cout << str << endl;
    str = "hello"; // dynamic = runtime resize
    cout << str << endl;
    return 0;
}