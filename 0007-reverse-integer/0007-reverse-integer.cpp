class Solution {
public:
    int reverse(int x) {
    int rev=0;
    int nums;
    while(x!=0)
    {
        nums=x%10;
        if(rev>INT_MAX/10||rev==INT_MAX/10 && nums>7)
        {
            return 0;
        }
         if(rev<INT_MIN/10||rev==INT_MIN/10 && nums<-8)
        {
            return 0;
        }
        rev=rev*10+nums;
        x=x/10;
    }
    return rev;
    }
};