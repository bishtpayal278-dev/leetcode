class Solution {
public:
    string frequencySort(string s) {
    unordered_map<char,int>hash;
    priority_queue<pair<int,char>>pq;
    string p="" ;
    for(int i=0;i<s.length();i++)  
    {
      hash[s[i]]++;
    }
    for(auto it:hash)
    {
     pq.push({it.second,it.first});
    }
    while(!pq.empty())
    {
        auto it=pq.top();
        int count=it.first;
        char ch=it.second;
        p.append(count,ch);
        pq.pop();
    }
   return p;
    }
};