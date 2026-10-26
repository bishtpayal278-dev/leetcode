class Solution {
public:
    bool checkInclusion(string s1, string s2) {
    unordered_map<char,int>hash1;
    unordered_map<char,int>hash;
    if(s1.length()>s2.length())
    {
        return false;
    }
    int i=0;
    int j=s1.length()-1;
    for(int d=i;d<=j;d++)
    {
        hash1[s1[d]]++;
        hash[s2[d]]++;
    }
    while(j<s2.length()-1)
    {
      if(hash==hash1)
      {
        return true;
      }
      hash[s2[i]]--;
      if(hash[s2[i]]==0)
      {
       hash.erase(s2[i]);
      }
      hash[s2[j+1]]++;
      i++;
      j++;
    }
    if(hash==hash1)
      {
        return true;
      }
    return false;
    }
};