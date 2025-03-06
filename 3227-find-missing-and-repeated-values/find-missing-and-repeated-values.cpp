class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int a=-1, b = -1;
        int n= grid[0].size();
       unordered_map<int, int>freq;
       for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            freq[grid[i][j]]++;
        }
       }

       for(int i = 1; i<= n*n; i++){
            if(freq.find(i)!=freq.end() && freq[i] == 2){
                a = i;
            }
            if(freq.find(i) == freq.end()){
                b = i;
            }
       }
       return {a, b};
    }
};