#include <iostream>
#include <string>
using namespace std;

class Solution {
public:

    // LeetCode 125: Valid Palindrome
    // Approach: Two Pointer Technique

    // Time Complexity: O(n)
    // Each character is visited at most once

    // Space Complexity: O(1)
    // No extra space is used (in-place checking)

    // Function to check if character is alphanumeric
    bool isAlphaNumeric(char ch) {
        if ((ch >= '0' && ch <= '9') || 
            (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {
            return true;
        }
        return false;
    }

    // Main function to check palindrome
    bool isPalindrome(string s) {
        int st = 0;
        int end = s.length() - 1;

        while (st < end) {

            // Skip non-alphanumeric characters from start
            if (!isAlphaNumeric(s[st])) {
                st++;
                continue;
            }

            // Skip non-alphanumeric characters from end
            if (!isAlphaNumeric(s[end])) {
                end--;
                continue;
            }

            // Compare characters (case-insensitive)
            if (tolower(s[st]) != tolower(s[end])) {
                return false;
            }

            // Move both pointers
            st++;
            end--;
        }

        return true;
    }
};

int main() {
    Solution obj;
    string s = "A man, a plan, a canal: Panama";

    if (obj.isPalindrome(s)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}