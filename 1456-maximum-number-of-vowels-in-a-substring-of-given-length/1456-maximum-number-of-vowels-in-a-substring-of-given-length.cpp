class Solution {
public:
    int maxVowels(string s, int k) {
    int i=0;
    int j=k-1;
    int cn=0;
    for(int d=i;d<=j;d++)
    {   
        if(s[d]=='a'||s[d]=='e'||s[d]=='i'||s[d]=='o'||s[d]=='u')
        { 
            cn++;
        }
    }
    int count=cn;
    while(j<s.length()-1)
    { 
     if (s[j+1]=='a'||s[j+1]=='e'||s[j+1]=='i'||s[j+1]=='o'||s[j+1]=='u')
     {
         cn=cn+1;
     }
     if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
     {
        cn=cn-1;
     }
     i++;
     j++;
     count=max(count,cn);
    }
    return count;
    }
};