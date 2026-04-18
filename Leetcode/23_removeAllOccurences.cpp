#include <iostream>
#include <string>
using namespace std;

class Solution {
public:

    // LeetCode 1910: Remove All Occurrences of a Substring
    // Approach: Repeated Find and Erase

    // Time Complexity: O(n^2)
    // Because each find() takes O(n) and erase() also takes O(n)
    // In worst case, we do this multiple times

    // Space Complexity: O(1)
    // No extra space used (in-place modification of string)

    string removeOccurrences(string s, string part) {

        // Loop until 'part' exists in string 's'
        while (s.length() > 0 && s.find(part) < s.length()) {

            // Find index of first occurrence of 'part'
            int index = s.find(part);

            // Remove substring 'part' starting from index
            s.erase(index, part.length());
        }

        // Return final modified string
        return s;
    }
};

int main() {
    Solution obj;

    string s = "daabcbaabcbc";
    string part = "abc";

    string result = obj.removeOccurrences(s, part);

    cout << "Final String: " << result << endl;

    return 0;
}