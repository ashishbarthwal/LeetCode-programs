class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
            return 0;
        
        int leftSum = 0, rightSum = 0, pivot = 0;
        
		// Storing Sum of all the elements from index 1 to n-1 in the rightSum
        for(int i = n-1; i>0;i--)
            rightSum += nums[i];
        
        // Adding one element to leftSum and deleteing one element from rightSum each time 
		// and then checking of their sum is equal
        while(pivot<n-1)
        {
            if(leftSum == rightSum)
                return pivot;
            
            leftSum += nums[pivot];
            pivot++;
            rightSum -= nums[pivot];
        }
        if(leftSum == rightSum)
            return pivot;
        
        return -1;
    }
};