class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int result = INT_MAX;
        int n = blocks.size();
       for(int i = 0; i<=n-k; i++){
           int w = 0;
           for(int j = i; j-i+1<=k; j++){
               if(blocks[j] == 'W'){
                w++;
               }
           }
           result = min(result, w);

       }
       return result;
    }
};