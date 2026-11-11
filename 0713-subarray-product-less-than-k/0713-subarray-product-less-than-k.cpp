class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count=0;
        int i=0;
        while(i<nums.size())
        {   
            int prd=nums[i];
            if(prd<k)
            {
                count++;
            }
            for(int j=i+1;j<nums.size();j++)
            {
            prd=prd*nums[j];
             if(prd<k)
            {
                count++;
            }
            else
            {
                break;
            }
            }
            i++;
        }
        return count;
    }
};