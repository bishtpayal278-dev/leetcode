class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    int low=0;
    int high=nums.size()-1;
    vector<int>v={-1,-1};
    while(low<=high)
    {
        int med=low+(high-low)/2;
        if(nums[med]==target)
        {
         v[0]=med;
         high=med-1;
        }
        else if(nums[med]<target)
        {
            low=med+1;
        }
        else
        {
            high=med-1;
        }
    }
     low=0;
     high=nums.size()-1;
    while(low<=high)
    {
        int med=low+(high-low)/2;
        if(nums[med]==target)
        {
         v[1]=med;
         low=med+1;
        }
        else if(nums[med]<target)
        {
            low=med+1;
        }
        else
        {
            high=med-1;
        }
    }
    return v;
    }
};