#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main() {
    queue<int>q;

    // push() function / emplace() you can use
    q.push(1);
    q.push(2);
    q.push(3);

    queue<int>q2;

    // to swap the elements of one queue to another
    // q2.swap(q);

    // to check the size of the queue - size()
    cout << "Size of q stack: " << q.size() << endl;
    cout << "Size of q2 stack: " << q2.size() << endl;

    // to access the front element - front()
    cout << "Top element is: " << q.front() << endl;

    // empty() to check if the queue is empty or not 

    while(!q.empty()) {
        cout << q.front() << " ";

        // to pop out the element (front one) from the queue
        q.pop();
    }

    cout << endl;
    return 0;
}