class Solution {
public:
    int strStr(string haystack, string needle) {
    int i=0;
    int j=needle.length()-1;
    if(needle.length()==0)
    {
        return 0;
    }
    if(needle.length()>haystack.length())
    {
        return -1;
    }
    string s="";
    for(int d=i;d<=j;d++)
    {
        s+=haystack[d];
    }
    while(j<haystack.length()-1)
    {
     if(needle==s)
     {
        return i;
     }
     else
     {
      s.erase(s.begin());
      i++;
      s+=haystack[j+1];
      j++;
     }
    }
     if(needle==s)
     {
        return i;
     }
    return -1;
    }
};