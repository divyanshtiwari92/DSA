class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int count = 0;
        int prev = 0;
        for(int i : target)
{
    if(i>prev){
        count += i-prev;
    }
    prev = i;
}    return count;}
};