class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[left] = nums[i];
                left++;
            }
        }
        for(int i = left;i<nums.size();i++){
            nums[left] =0;
            left++;
        }
    }
};
