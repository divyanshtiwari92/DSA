class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> result;
        int num = 0;  // store remainder only

        for(int bit : nums){
            num = (num * 2 + bit) % 5;  // convert to decimal mod 5
            result.push_back(num == 0);
        }

        return result;
    }
};
