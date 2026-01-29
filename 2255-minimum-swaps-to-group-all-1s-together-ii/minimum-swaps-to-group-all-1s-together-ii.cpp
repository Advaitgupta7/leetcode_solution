class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int win=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1) win++;
        }
        if(win <= 1) return 0;
        int maxw=0;
        for(int i=0;i<win;i++){
            if(nums[i]==1) maxw++;
        }
        int maxo = maxw;
        int start =0;
        int end= win;
        while(start<n){
            if(nums[end%n]==1) maxw++;
            if(nums[start]==1) maxw--;
            maxo = max(maxo,maxw);
            start++;
            end++;
        }
        return win - maxo;
    }
};