class Solution {
public:
    int maximumProduct(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int i=nums.size()-1;
       int maxprd=nums[i]*nums[i-1]*nums[i-2];
       int prd=nums[i]*nums[0]*nums[1];
       return max(maxprd,prd);
    }
};