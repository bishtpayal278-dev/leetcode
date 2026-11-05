class Solution {
public:
    int countElements(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    if(nums[0]==nums[nums.size()-1])
    {
        return 0;
    }
    int count= nums.size()-2;
    int i=0;
    int j=1;
    while(nums[i]==nums[j])
    {
        count--;
        j++;
    }
    i=nums.size()-1;
    j=nums.size()-2;
    while(nums[i]==nums[j])
    {
     count--;
     j--;
    }
    return count;
    }
};