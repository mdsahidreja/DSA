class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int>temp;
        vector<int>ans(2, -1);
        for(int i = left; i<=right; i++){
            if(isPrime(i)){
                temp.push_back(i);
            }
            
            
        }
        if(temp.size() < 2){
            return {-1, -1};
        }
        int minDiff = INT_MAX;
        for(int i = 1; i<temp.size(); i++){
            if(minDiff > temp[i] - temp[i-1]){
                minDiff = temp[i] - temp[i-1];
                ans[0] = temp[i-1];
                ans[1] = temp[i];
            }
            else if(minDiff == temp[i] - temp[i-1] && temp[i-1] < ans[0]){
                ans[0] = temp[i-1];
                ans[1] = temp[i];
            }
        }
        return ans;
    }

private:
    bool isPrime(int n){
        if(n == 1 || n == 0){
            return false;
        }
        for(int i = 2; i*i<=n; i++){
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }
};