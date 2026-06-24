class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        unordered_map<int, int>freq;
        for(int num:nums){
            freq[num]++;
        }
        for(auto x : freq) {
            if(x.second > n / 3) {
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};