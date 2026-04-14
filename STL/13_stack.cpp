#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main() {
    stack<int>s;

    // push() function / emplace() you can use
    s.push(1);
    s.push(2);
    s.push(3);

    stack<int>s2;

    // to swap the elements of one stack to another
    // s2.swap(s);

    // to check the size of the stack - size()
    cout << "Size of s stack: " << s.size() << endl;
    cout << "Size of s2 stack: " << s2.size() << endl;

    // to access the top element - top()
    cout << "Top element is: " << s.top() << endl;

    // empty() to check if the stack is empty or not 

    while(!s.empty()) {
        cout << s.top() << " ";

        // to pop out the element (top one) from the stack
        s.pop();
    }

    cout << endl;
    return 0;
}