class Solution {
public:
    int minMoves2(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int a=nums[(nums.size()-1)/2];
    long long count=0;
    for(int i=0;i<nums.size();i++)
    {
     if(nums[i]<a)
     { 
        count+=a-nums[i];
     }
     else
     {
        count+=nums[i]-a;
     }
    }
    return count;
    }
};