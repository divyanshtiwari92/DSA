class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> grid(m, vector<int>(n, 0)); // make grid

        // mark guards & walls
        for (auto g : guards) grid[g[0]][g[1]] = 2;
        for (auto w : walls) grid[w[0]][w[1]] = 2;

        // move directions: up, down, left, right
        int dx[4] = {-1, 1, 0, 0};
        int dy[4] = {0, 0, -1, 1};

        // for each guard
        for (auto g : guards) {
            for (int d = 0; d < 4; d++) {
                int x = g[0] + dx[d], y = g[1] + dy[d];
                while (x >= 0 && x < m && y >= 0 && y < n && grid[x][y] != 2) {
                    grid[x][y] = 1; // mark seen
                    x += dx[d];
                    y += dy[d];
                }
            }
        }

        // count unseen cells
        int ans = 0;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (grid[i][j] == 0)
                    ans++;

        return ans;
    }
};
