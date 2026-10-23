class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int i=0;
        int length=nums.size()+1;
    for(int j=0;j<nums.size();j++)
    {
     sum=sum+nums[j];
     while(sum>=target)
     {  
        if(length>j-i+1)
        {
            length=j-i+1;
        }
        sum=sum-nums[i];
        i++;
     }
    }
    if(length==nums.size()+1)
    {
        return 0;
    }
    return length;
    }
};