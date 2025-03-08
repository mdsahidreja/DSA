class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        
        int result = INT_MAX;
        for(int i = 0; i < n - k + 1; i++){
            int J = i;
            int temp = 0;
            while(J < n && J < i + k){
                if(blocks[J] == 'W'){
                    temp++;
                }
                J++;
            }
            result = min(result, temp);
        }
        return result;
    }
};