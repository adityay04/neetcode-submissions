class Solution {
public:
    int minSwaps(string s) {
        int n = s.size();
        int i = 0, j = n - 1;
        int balance = 0,count = 0;
        while (i < j) {
            if (s[i] == '[') {
                balance++;
            } else {
                balance--;
            }
            if (balance < 0) {
                while (i < j && s[j] != '[') {
                    j--;
                }
                swap(s[i], s[j]);
                count++;
                balance = 1;
            }
            i++;
        }
        return count;
    }
};