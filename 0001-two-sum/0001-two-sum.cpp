class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector <int>v;
    for(int i=0;i<nums.size();i++)
    {
    int sum=0;
    for(int j=i+1;j<nums.size();j++)
    {
     sum=nums[i]+nums[j];
     if(sum==target)
     {
        v.push_back(i);
        v.push_back(j);
        break;
     }
    }
    }
    return v;  
    }
};