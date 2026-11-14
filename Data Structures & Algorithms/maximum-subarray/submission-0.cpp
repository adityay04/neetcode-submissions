class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int result = nums[0], maxi = nums[0];
        for(int i = 1; i<n; i++){
            maxi = max(nums[i], nums[i]+maxi);
            result = max(result, maxi);
        }
        return result;
    }
};
