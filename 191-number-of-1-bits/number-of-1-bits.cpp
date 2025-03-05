class Solution {
public:
    int hammingWeight(int n) {
        if(n == 1) return 1;
        if(n == 0) return 0;

        int ans = 0;
        while(n > 0){
            if(n % 2 == 1) ans++;
            n = n/2;
        }
        return ans;
    }
};