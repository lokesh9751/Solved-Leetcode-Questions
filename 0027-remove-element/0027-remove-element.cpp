class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j=0,k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] != val)
            {
                swap(nums[i],nums[j]);
                j++;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == val)
            {
                nums[i] = -1;
            }
            else{
                k++;
            }
        }
        return k;
    }
};