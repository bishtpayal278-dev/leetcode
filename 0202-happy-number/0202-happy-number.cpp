class Solution {
public:
    bool isHappy(int n) {
    unordered_set<int>seen;
    while(n!=1)
    {   long long happy=0;
        while(n!=0)
        {   
            int num=n%10;
            n=n/10;
            happy+=num*num;
        }  
              n=happy;
              if(seen.count(n))
              {
                return false;
              }
              seen.insert(n);
    }  
    return true;
    }
};