class Solution {
public:
    bool isPalindrome(int x) {
    int num;
    long long rev=0;
    int n=x;
    if(n<0)
    {
    return false;
    }
    while(x!=0)
    {
        num=x%10;
        rev=rev*10+num;
        x=x/10;
    }
    if(rev==n)
    {
        return true;
    }
    if(n<0)
    {
    return false;
    }
    return false;
    }
};