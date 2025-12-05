class Solution {
public:
    long long countPartitions(vector<int>& nums) {
        long long total = 0;
        for (int x : nums) total += x;
        return (total % 2 == 0) ? (long long)nums.size() - 1 : 0;
    }
};
