class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int i=0;
        int j=k-1;
        int count=0;
        for(int d=i;d<=j;d++)
        {
            if(blocks[d]=='B')
            {
                count++;
            }
        }
        int B=k-count;
        while(j<blocks.size()-1)
        {
            if(blocks[i]=='B')
            {
                count--;
            }
            i++;
            j++;
            if(blocks[j]=='B')
            {
                count++;
            }
            B=min(B,k-count);
        }
    return B;
    }
};