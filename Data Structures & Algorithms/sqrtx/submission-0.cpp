class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        int i = 0, j = x;
        int ans = 0;
        while(i<=j){
            long long mid = i+(j-i)/2;
            if(mid*mid==x) return mid;
            else if(mid*mid < x){
                ans = mid;
                i = mid+1;
            }
            else j = mid-1;
        }
        return ans;
    }
};