class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    vector<int>v;
    unordered_map<int,int>hash;
    for(int i=0;i<nums.size();i++)
    {
      if(hash[nums[i]]==1)
      {
        v.push_back(nums[i]);
      }
      hash[nums[i]]++;
    }
    return v;
    }
};