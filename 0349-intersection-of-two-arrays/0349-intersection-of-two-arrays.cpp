class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<bool>used(nums2.size(),false);
    vector<int>v;
    for(int i=0;i<nums1.size();i++)
    {
        for(int j=0;j<nums2.size();j++)
        {
            if(nums1[i]==nums2[j] && !used[j])
            {  
            if(find(v.begin(),v.end(),nums2[j])==v.end())
            {
            v.push_back(nums2[j]);
            used[j]=true;
            break;
            }
            }
        }
    }
    return v;
    }
};