class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
    int i=0;
    int j=k-1;
    int sum=0;
     for(int d=i;d<=j;d++)
        {   
           sum=sum+nums[d];    
        }
    double avg=(double)sum/k;
    while(j<nums.size()-1)
    {   
        sum+=nums[j+1]-nums[i];
        double ag=(double)sum/k;
        avg=max(avg,ag);
        i++;
        j++;
    }
    return avg;
    }
};