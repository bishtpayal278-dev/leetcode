class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int low=0;
    int high=nums.size()-1;
    while(low<=high)
    {  
        int med=low+(high-low)/2;
        if(nums[med]<target)
        {
            low=med+1;
        }
        else if(nums[med]>target)
        {
          high=med-1;
        }
        else if(nums[med]==target)
        {
        return med;
        }
    }
    return low;
    }
};