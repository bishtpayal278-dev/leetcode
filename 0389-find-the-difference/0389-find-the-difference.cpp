class Solution {
public:
    char findTheDifference(string s, string t) {
    char XOR=0;
    for(int i=0;i<s.length();i++)
    {
        XOR=XOR^s[i];
    }
    for(int j=0;j<t.length();j++)
    {
        XOR=XOR^t[j];
    }
    return XOR;
    }
};