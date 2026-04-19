// LeetCode 567: Permutation in String
// Approach: Sliding Window + Frequency Count

// Time Complexity: O(26 * n) ≈ O(n)

// Space Complexity: O(1)
// Fixed size arrays (26)

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:

    // Function to compare two frequency arrays
    bool isSame(int a[26], int b[26]) {
        for(int i = 0; i < 26; i++) {
            if(a[i] != b[i]) return false;
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {

        // Edge case
        if(s1.length() > s2.length()) return false;

        int freq1[26] = {0}; // s1 frequency
        int freq2[26] = {0}; // window frequency

        // Step 1: Fill freq1 (pattern)
        for(char ch : s1) {
            freq1[ch - 'a']++;
        }

        int windowSize = s1.length();

        // Step 2: First window fill
        for(int i = 0; i < windowSize; i++) {
            freq2[s2[i] - 'a']++;
        }

        // Step 3: Check first window
        if(isSame(freq1, freq2)) return true;

        // Step 4: Sliding window
        for(int i = windowSize; i < s2.length(); i++) {

            // Add new character
            freq2[s2[i] - 'a']++;

            // Remove old character
            freq2[s2[i - windowSize] - 'a']--;

            // Compare
            if(isSame(freq1, freq2)) return true;
        }

        return false;
    }
};

int main() {
    Solution obj;

    string s1 = "ab";
    string s2 = "eidbaooo";

    bool result = obj.checkInclusion(s1, s2);

    if(result) {
        cout << "Permutation exists" << endl;
    } else {
        cout << "Permutation does not exist" << endl;
    }

    return 0;
}