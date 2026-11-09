class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
    int sum=0;
    vector<int>hash(101,0);
    for(int i=0;i<nums.size();i++)  
    {
        hash[nums[i]]++;
    }
    for(int i=0;i<hash.size();i++)
    {
        if(hash[i]==1)
        {
            sum+=i;
        }
    }
    return sum;
    }
};