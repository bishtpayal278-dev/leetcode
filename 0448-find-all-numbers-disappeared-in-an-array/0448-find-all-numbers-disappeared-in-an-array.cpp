class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    vector<int>v;
    sort(nums.begin(),nums.end());
    vector<int>hash(nums.size()+1,0);
    for(int i=0;i<nums.size();i++)
    {
        hash[nums[i]]++;
    }
    for(int j=1;j<=nums.size();j++)   
    {
        if(hash[j]==0 )
        {
            v.push_back(j);
        }
    }
    return v;
    }
};