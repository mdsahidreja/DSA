class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<bool> isPrimes = eratosthenes(right);
        vector<int> primes;

        for(int i = left; i<=right; i++){
            if(isPrimes[i]){
                primes.push_back(i);
            }
        }
        int minDiff = INT_MAX;
        vector<int> result(2, -1);
        for(int i = 1; i<primes.size(); i++){
            int diff = primes[i] - primes[i-1];
            if(diff < minDiff){
                minDiff = diff;
                result[0] = primes[i-1];
                result[1] = primes[i];
            }
        }
        return result;
    }

private:
    vector<bool> eratosthenes(int right){
        vector<bool> isPrime(right+1, true);
        isPrime[0] = false;
        isPrime[1] = false;
        for(int i = 2; i*i<=right; i++){
            if(isPrime[i]){
                for(int j = 2*i; j<isPrime.size(); j = j + i){
                    isPrime[j] = false;
                }
            }
        }
        return isPrime;
    }
};