class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int mis=0;
        for(int i=0;i<nums.size();i++)
        {
            mis = mis^nums[i];
        }
        return mis;
    }
};