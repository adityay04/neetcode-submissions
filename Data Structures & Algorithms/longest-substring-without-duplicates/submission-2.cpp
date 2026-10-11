class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int i = 0, j = 0;
        unordered_set<char>str;
        int maxi = 0;
        while(j<n){
            while(str.find(s[j])!=str.end()){
                str.erase(s[i]);
                i++;
            }
            str.insert(s[j]);
            maxi = max(maxi, j-i+1);
            j++;
        }
        return maxi;
    }
};
