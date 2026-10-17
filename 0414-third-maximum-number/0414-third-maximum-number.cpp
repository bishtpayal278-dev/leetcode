class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max2=INT_MIN;
        int max=nums[nums.size()-1];
        int count=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
         if(max!=nums[i])
         {  
            if(count<2)
            {
            max2=nums[i];
            count++;
            }
            if(nums[i]!=max2)
            {
                return nums[i];
            }
        }
        }
    return max;
    }
};