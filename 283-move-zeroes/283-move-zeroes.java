class Solution {
    public void moveZeroes(int[] nums) {
        int n=nums.length;
        int i,count=0,x=0;
        if(n==1)
        {
            return;
        }
        else{
        for(i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                nums[x++]=nums[i];
            }
            else
                count++;
        }
        for(i=n-count;i<n;i++)
        {
          nums[i]=0;
        }
        return;
    }
  }
}