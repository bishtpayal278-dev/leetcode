class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    unordered_set<char>dup;
    int i=0,length=0;
    for(int j=0;j<s.length();j++)
    {
     while(dup.find(s[j])!=dup.end())
     {
     dup.erase(s[i]);
     i++;
     }
    dup.insert(s[j]);
    length=max(length,j-i+1);
    }
    return length;
    }
};