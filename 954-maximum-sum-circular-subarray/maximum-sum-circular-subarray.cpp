class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = nums[0];
        int CurMax = nums[0];
        int MaxSum = nums[0];
        int CurMin = nums[0];
        int MinSum = nums[0];
        for(int i=1;i<nums.size();i++){
            total += nums[i];
            CurMax = max(nums[i] , CurMax+nums[i]);
            MaxSum = max(MaxSum,CurMax);
            CurMin = min(nums[i] , CurMin+nums[i]);
            MinSum = min(MinSum,CurMin);

        }
        if(MaxSum<0) return MaxSum;
        return(max(MaxSum, total-MinSum));
    }
};