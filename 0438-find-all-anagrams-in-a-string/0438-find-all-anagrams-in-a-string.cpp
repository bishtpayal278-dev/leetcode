class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
vector<int>v;
    unordered_map<char,int>hash;
    unordered_map<char,int>hash1;
    if(p.length()>s.length())
    {
        return v;
    }
    int i=0;
    int j=p.length()-1;
    for(int d=i;d<=j;d++)
    {
        hash1[p[d]]++;
        hash[s[d]]++;
    }
    while(j<s.length()-1)
    {
        if(hash==hash1)
        {
            v.push_back(i);
        }
        hash[s[i]]--;
        if(hash[s[i]]==0)
        {
            hash.erase(s[i]);
        }
        hash[s[j+1]]++;
        i++;
        j++;
    }
     if(hash==hash1)
        {
            v.push_back(i);
        }
    return v;
    }
};