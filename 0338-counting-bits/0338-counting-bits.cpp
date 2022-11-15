class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> bits;
        int i,count=0;
        for(i=0;i<=n;i++)
        {
            int x=i;
            count=0;
            while(x)
            {
                if(x%2==1)
                {
                 count++;
                }
                x=x/2;
            }
            bits.push_back(count);
        }
        return bits;
    }
};