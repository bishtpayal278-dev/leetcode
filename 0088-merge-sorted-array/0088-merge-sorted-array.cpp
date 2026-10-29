class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int j=n-1,k=m+n-1;
    int i=m-1;
    if(m==0)
        {
         for(int k=0;k<nums2.size();k++)
     {
        nums1[k]=nums2[k];
     }
        return; 
        }
    while(j>=0)
    {
        if(i<0)
        {
            nums1[k]=nums2[j];
            j--;
            k--;
            continue;
        }
     if(nums1[i]>nums2[j])
     {
        nums1[k]=nums1[i];
        i--;
     }
     else
     {
        nums1[k]=nums2[j];
        j--;
     }
    k--;
    }
    }
};