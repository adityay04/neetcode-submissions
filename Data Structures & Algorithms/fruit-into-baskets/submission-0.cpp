class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int i = 0, j = 0;
        int maxi = INT_MIN;
        unordered_map<int, int> count;
        while(j<n){
            count[fruits[j]]++;
            while(count.size() > 2){
                count[fruits[i]]--;
                if(count[fruits[i]] == 0){
                    count.erase(fruits[i]);
                }
                i++;
            }
            maxi = max(maxi, j-i+1);
            j++;
        }
        return maxi;
    }
};