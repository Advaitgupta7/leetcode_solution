class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int window_sum = 0;
        for(int i=0;i<k;i++){
            window_sum += nums[i];
        }
        int max_sum = window_sum;
        for(int i=k;i<nums.size();i++){
            window_sum = window_sum - nums[i-k] + nums[i];
            max_sum = max(max_sum,window_sum);
        }
        return(double)max_sum/k;
    }
};