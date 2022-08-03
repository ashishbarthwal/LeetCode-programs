class Solution {
    public int[] twoSum(int[] nums, int target) {
     int i,j,n,sum;
        n=nums.length;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(j!=i)
                {
                   sum=nums[i]+nums[j];
                    if(sum==target)
                    {
                        return new int[] {i,j};
                    }
                }
            }
        }
        return new int[] {};
    }
}