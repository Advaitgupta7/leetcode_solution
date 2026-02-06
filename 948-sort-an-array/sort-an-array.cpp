class Solution {
public:
    void quickSort(vector<int>&nums, int low, int high){
        if(low>=high) return;
        int pivot = nums[low];
        int i = low;
        int j = high;
        while(i<j){
            while (i < j && nums[j] >= pivot) j--;
            while (i < j && nums[i] <= pivot) i++;
            swap(nums[i], nums[j]);
        }
        swap(nums[low], nums[i]);
        quickSort(nums, low, i - 1);
        quickSort(nums, i + 1, high);
    }
    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums, 0, nums.size() - 1);
        return nums;
    }
};