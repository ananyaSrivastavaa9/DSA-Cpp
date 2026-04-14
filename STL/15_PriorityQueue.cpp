#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main() {
    priority_queue<int>q;

    // to reverse order priority queue
    // priority_queue<int, vector<int>, greater<int>>q;
    
    q.push(10);
    q.push(2);
    q.push(8);
    q.push(3);

    while(!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }

    cout << endl;
    return 0;
}