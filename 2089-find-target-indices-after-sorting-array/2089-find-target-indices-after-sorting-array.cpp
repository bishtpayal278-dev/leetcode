class Solution {
public:
    vector<int>targetIndices(vector<int>& nums, int target) {
    vector<int>v;
    sort(nums.begin(),nums.end());
    int low=0;
    int high=nums.size()-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(nums[mid]==target)
        {  
            v.push_back(mid);
            high=mid-1;
        }
        else if(target>nums[mid])
        {
        low=mid+1;
        }
        else
        {
        high=mid-1;
        }
    }
    low=0;
    high=nums.size()-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(nums[mid]==target)
        {   if(find(v.begin(),v.end(),mid)==v.end())
            {
             v.push_back(mid);
            }
            low=mid+1;
        }
        else if(target>nums[mid])
        {
        low=mid+1;
        }
        else
        {
        high=mid-1;
        }
    }
    if(v.empty())
    {
        return v;
    }
    sort(v.begin(),v.end());
    int first =v[0];
    int last=v[v.size()-1];
    v.clear();
    for(int i=first;i<=last;i++)
    {
        v.push_back(i);
    }
    return v;
    }
};