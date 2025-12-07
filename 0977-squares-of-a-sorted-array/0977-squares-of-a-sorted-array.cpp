class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
     int n = nums.size();
     vector<int>res(n);
    int k = n-1;
    int i = 0;
    int j = nums.size()-1;
         while(i<=j){
             if(abs(nums[i])>abs(nums[j])){
                     res[k] = nums[i]*nums[i];
                    i = i+1;}
             else{
                     res[k] = (nums[j]*nums[j]);
                     j = j-1;
           }
            k--;
        }
return res;
    }
};