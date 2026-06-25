class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int i = 0, j = 0;
        int maxi = 0;
        unordered_set<char>set;
        while(j<n){
            while(set.find(s[j])!=set.end()){
                set.erase(s[i]);
                i++;
            }
            set.insert(s[j]);
            maxi=max(maxi, j-i+1);
            j++;
        }
        return maxi;
    }
};
