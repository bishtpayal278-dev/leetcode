class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(),nums.end());
    int asum=INT_MAX;
    int diff=INT_MAX;
    for(int i=0;i<nums.size()-2;i++)
        {
         int j=i+1;
         int k=nums.size()-1;
         while(j<k)
         {  
            int sum=nums[i]+nums[j]+nums[k];
            if(sum==target)
            {
                return sum;
            }
        if(diff>abs(sum-target))
        {   diff=abs(sum-target);
            asum=sum;
        }
        if(sum>target)
        {
            k--;
        }
        else
        {
            j++;
        }
        }
        }
    return asum;
    }
};