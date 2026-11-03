class Solution {
public:
    int minMoves(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     int mid=nums[nums.size()-1];
     int count=0;
     for(int i=0;i<nums.size();i++)
     {
            count+=mid-nums[i];
     }
     return count;
    }
};