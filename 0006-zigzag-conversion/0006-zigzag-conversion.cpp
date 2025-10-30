class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s; // only one row, return same string

        vector<string> row(numRows);
        int i = 0, step = 1; // step = direction

        for (char c : s) {
            row[i] += c;

            if (i == 0) step = 1;              // go down
            else if (i == numRows - 1) step = -1; // go up

            i += step;
        }

        string ans = "";
        for (string r : row) ans += r;
        return ans;
    }
};
