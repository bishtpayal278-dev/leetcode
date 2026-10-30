class Solution {
public:
    bool isAnagram(string s, string t) {
    unordered_map<int,int>hash;
    unordered_map<int,int>hash1;
    for(int i=0;i<s.length();i++)
    {
        hash[s[i]]++;
    }
    for(int i=0;i<t.length();i++)
    {
        hash1[t[i]]++;
    }
    if(hash==hash1)
    {
        return true;
    }
    return false;
    }
};