class Solution {
public:
    bool validPalindromehelper(int i, int j, string &s) {
        while (i < j) {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i = 0, j = s.length() - 1;

        while (i < j) {
            if (s[i] != s[j]) {
                // try skipping either left or right char
                return validPalindromehelper(i + 1, j, s) ||
                       validPalindromehelper(i, j - 1, s);
            }
            i++;
            j--;
        }
        return true;
    }
};
