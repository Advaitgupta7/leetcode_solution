class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        
        int n = nums1.size();

        // Special case
        if(k == 0) {
            return (nums1 == nums2) ? 0 : -1;
        }

        long long positive = 0;
        long long negative = 0;

        for(int i = 0; i < n; i++) {

            long long diff = nums1[i] - nums2[i];

            // Difference must be divisible by k
            if(diff % k != 0)
                return -1;

            if(diff > 0)
                positive += diff / k;
            else
                negative += (-diff) / k;
        }

        // Total increase must equal total decrease
        if(positive != negative)
            return -1;

        return positive;
    }
};