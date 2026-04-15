#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    vector<char> s(n);

    cout << "Enter characters: ";
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    int st = 0;
    int end = n - 1;

    while(st < end) {
        swap(s[st], s[end]);
        st++;
        end--;
    }

    cout << "Reversed: ";
    for(int i = 0; i < s.size(); i++) {
        cout << s[i];
    }

    return 0;
}