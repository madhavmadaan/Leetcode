class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int  currPrice = nums[0];
        int maxProfit = 0 ;
        for(int i = 1;i<nums.size();i++){
            if(currPrice > nums[i]){
                currPrice  = nums[i];
            }else{
                int profit  = nums[i] - currPrice;
                maxProfit =  max(maxProfit,profit);
            }
            
        }
        
        return maxProfit;
    }
};