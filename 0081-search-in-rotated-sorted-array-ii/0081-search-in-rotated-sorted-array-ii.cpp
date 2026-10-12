class Solution {
public:
    bool search(vector<int>& nums, int target) {
    int low=0;
    int high=nums.size()-1;
    while(low<=high)
    {
        int med=low+(high-low)/2;
        if(target==nums[med])
        {
            return true;
        }
        if(nums[low]==nums[med] && nums[high]==nums[med])
        {
            low++;
            high--;
        }
        else if (nums[low]<=nums[med])
        {
            if(nums[low]<=target && nums[med]>target)
            {
            high=med-1;
            }   
            else
            {
                low=med+1;
            }   
        }
        else
        {
            if(nums[med]<target && target<=nums[high])
            {
                low=med+1;
            }
            else
            {
                high=med-1;
            }
        }
    }
    return false;
    }
};