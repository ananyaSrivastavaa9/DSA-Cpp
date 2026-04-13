#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;
int main() {
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_front(3);
    d.push_front(5);
    for(int val : d) {
        cout << val << " ";
    }
    cout << endl;
    cout << d[3] << endl;
    return 0;
}