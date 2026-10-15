class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
    int low=0;
    int high=letters.size()-1;
    while(low<=high)
    {   int med=low+(high-low)/2;
        if(letters[med]<=target)
        {
            low=med+1;
        }
        else
        {
            high=med-1;
        }
    }
    return low<letters.size()?letters[low]:letters[0];
    }
};