class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currMax = nums[0] ;
        int wMax = nums[0] ;
        for(int i = 1;i<nums.size();i++){
            currMax = max(nums[i],currMax + nums[i]);
            wMax = max(currMax,wMax);
        }
        return wMax;
    }
};