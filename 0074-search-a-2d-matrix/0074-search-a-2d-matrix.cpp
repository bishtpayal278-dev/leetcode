class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m=matrix.size();;
    int n=matrix[0].size();
    int low=0;
    int high=n*m-1;
    while(low<=high)
    {   
        int med=low+(high-low)/2;
        int r=med/n;
        int c=med%n;
        if(matrix[r][c]==target)
        {
            return true;
        }
        else if(target>matrix[r][c])
        {
            low=med+1;
        }
        else
        {
            high=med-1;
        }
    }
    return false;
    }
};