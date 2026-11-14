class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int minsum=INT_MAX;
        for(int d=l;d<=r;d++)
        {
            int i=0;
            int j=d-1;
            int sum=0;
             for(int i=0;i<d;i++)
           {
            sum+=nums[i];
           }
        while(j<nums.size()-1)
        {   if(sum>0)
          {
           minsum=min(sum,minsum);
          }
           sum+=nums[j+1]-nums[i];
           j++;
           i++;
        }
          if(sum>0)
          {
            minsum=min(sum,minsum);
          }
        }
        if(minsum==INT_MAX)
        {
            return -1;
        }
        return minsum;
    }
};