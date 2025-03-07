class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;

        while(seen.find(n) == seen.end()){
            seen.insert(n);
            n = getNextNumber(n);
            if(n == 1) return true;

        }
        return false;
    }
public:
    int getNextNumber(int n){
        int sqSum = 0;

        while(n > 0){
            int lastDigit = n % 10;
            sqSum += (lastDigit * lastDigit);
            n = n/10;
        }
        return sqSum;
    }
};