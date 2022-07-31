class Solution 
{
    public void rotate(int[] nums, int k) 
    {
        int i,j,x,l=0,m=0,n;
        n=nums.length;
        if(n<=1)
        {
            return;
        }
         else
            {
                k = k % n;
        int[] back=new int[k];
        int[] front=new int[n-k];
        for(i=n-k;i<n;i++)
        {
            back[l]=nums[i];
            l++;
        }
        for(i=0;i<n-k;i++)
        {
            front[i]=nums[i];
        }
        for(i=0;i<k;i++)
        {
            nums[i]=back[i];
        }
        for(i=k;i<n;i++)
        {
            nums[i]=front[m];
            m++;
        }
       return;
     }
   }
}

