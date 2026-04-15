// Time complexity - O(n)
// ques 344.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int st = 0;
        int end = n - 1;

        while(st < end) {
            swap(s[st], s[end]);
            st++;
            end--;
        }
    }
};

int main() {
    int n;
    cout << "Enter number of characters: ";
    cin >> n;

    vector<char> s(n);
    cout << "Enter characters: ";
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }

    Solution obj;
    obj.reverseString(s);

    cout << "Reversed string: ";
    for(char c : s) {
        cout << c << " ";
    }

    return 0;
}