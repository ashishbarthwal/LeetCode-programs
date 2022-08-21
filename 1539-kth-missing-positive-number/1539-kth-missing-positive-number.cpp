class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i=1,j=0,count=0;
        int x= arr.size();
        while(i<=1000 && j!=x)
        {
            if(arr[j]==i)
            {   
                i++;
                j++;
                if(j==x)
                {
                    i--;
                    break;
                } 
            }
            else 
            {
                i++;
                count++;
                if(count==k)
                {
                    i--;
                    break;
                }
            }
        }
        if(count!=k)
        {
        for(int x=0;x<k-count;x++)
        {
            i++;
        }
        }
        return i;
    }
};