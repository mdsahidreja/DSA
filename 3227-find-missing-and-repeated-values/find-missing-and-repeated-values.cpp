class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        long long N = n*n;
        long long actSum = 0, expSum = N * (N + 1) / 2;
        long long actSqSum = 0;
        long long expSqSum = N * (N + 1)*(2*N + 1) / 6;
       
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                actSum += grid[i][j];
                actSqSum += (grid[i][j] * grid[i][j]);
            }
        }
        long long sumDiff = expSum - actSum;
        long long sqDiff = expSqSum - actSqSum;

        long long a = (sqDiff/sumDiff - sumDiff)/2;
        long long b = (sqDiff/sumDiff + sumDiff)/2;
        return {(int)a, (int)b};
    }
};