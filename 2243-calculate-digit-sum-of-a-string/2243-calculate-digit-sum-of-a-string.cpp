class Solution {
public:
    string digitSum(string s, int k) {
        if(k==1)
        {
            return s;
        }
        while(s.length()>k)
        { 
          string ans="";
          for(int i=0;i<s.length();i+=k)
        {
          int sum=0;
          int j=i;
          while(j<i+k && j<s.length())
          {
            sum=sum+(s[j]-'0');
            j++;
          }
         ans+=to_string(sum);
        }
        s=ans;
        }
        return s;   
    }
};