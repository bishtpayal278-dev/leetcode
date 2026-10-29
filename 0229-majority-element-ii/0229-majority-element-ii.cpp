class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       unordered_map<int,int>hash;
       vector<int>v;
       for(int i=0;i<nums.size();i++) 
       {
        hash[nums[i]]++;
        if(hash[nums[i]]>nums.size()/3)
        {
            if(find(v.begin(),v.end(),nums[i])==v.end())
            {
                v.push_back(nums[i]);
            }
        }
       }
       return v;
    }
};