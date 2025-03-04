class Solution {
public:
    bool checkPowersOfThree(int n) {
        //first calculate max power
        int power = 0;
        while(pow(3, power) <= n){
            power++;
        }
        power--;

        while(n > 0){
            if(n >= pow(3, power)){
                n = n - pow(3, power);
            }
            if(n >= pow(3, power)){
                return false;
            }
            power--;
        }
        return true;
    }
};