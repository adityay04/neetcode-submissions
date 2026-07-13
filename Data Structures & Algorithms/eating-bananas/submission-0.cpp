class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int i = 1;
        int j = *max_element(piles.begin(), piles.end());
        while(i < j){
            int mid = i + (j - i) / 2;
            long long hours = 0;
            for(int p : piles){
                hours += (p + mid - 1) / mid;
            }
            if(hours <= h){
                j = mid;
            }
            else{
                i = mid + 1;
            }
        }
        return i;
    }
};