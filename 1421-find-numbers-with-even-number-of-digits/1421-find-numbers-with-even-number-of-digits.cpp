class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        
        for(int i=0;i<nums.size();i++)
        {
            int counttemp=0;
            int temp=nums[i];
            while(temp>0)
            {
                counttemp++;
                temp=temp/10;
            }
            if(counttemp%2==0)
            {
                count++;
            }
        }
        return count;
    }
};