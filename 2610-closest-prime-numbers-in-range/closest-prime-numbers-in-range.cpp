class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<bool> primes = helper(right);
        vector<int>temp;

        for(int i = left; i<= right;i++){
            if(primes[i]){
                temp.push_back(i);
            }
        }
        int minDiff = INT_MAX;
        vector<int> result(2, -1);
        for(int i = 1; i<temp.size(); i++){
            int diff = temp[i] - temp[i-1];
            if(diff < minDiff){
                minDiff = diff;
                result = {temp[i-1], temp[i]};
            }
        }
        return result;
    }
private:
    vector<bool> helper(int right){
        vector<bool>primes(right+1, true);
        primes[0] = false;
        primes[1] = false;

        for(int i = 2; i<=right; i++){
            if(primes[i]){
                for(int j = 2*i; j<=right; j= j + i){
                    primes[j] = false;
                }
            }
        }
        return primes;
    }
};