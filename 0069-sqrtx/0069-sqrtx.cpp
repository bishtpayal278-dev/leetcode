class Solution {
public:
    int mySqrt(int x) {
        int low=1;
        int high=x;
        while(low<=high)
        {
            long long med=low+(high-low)/2;
            long long value=med*med;
            if(value<=x)
            {
                low=med+1;
            }
            else {
                high=med-1;
            }
        }
        return high;
       }
};