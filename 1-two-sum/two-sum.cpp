class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> freq;
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]=i;
        }
        for(int i=0; i<nums.size(); i++){
            int t=target-nums[i];
            if(freq.find(t)!=freq.end() && freq[t]!=i){
                return {i, freq[t]};
            }
        }
        return {};
    }
};