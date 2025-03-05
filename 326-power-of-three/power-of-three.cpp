class Solution {
public:
    bool isPowerOfThree(int n) {
        //edge case 1
        if(n == 1){
            return true;
        }
        //edge case 2
        if(n <= 0 || n%3 != 0){
            return false;
        }
        while(n > 1){
            if(n%3 != 0){
                return false;
            }
            n = n/3;
        }
        return true;

    }
};