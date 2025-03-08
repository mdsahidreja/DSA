class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int result = INT_MAX;
        int n = blocks.size();
        int i = 0;
        int j = 0;
        int w = 0;
        while(j < n){
            if(blocks[j] == 'W'){
                w++;
            }
            if(j - i + 1 == k){
                result = min(result, w);
                if(blocks[i] == 'W'){
                    w--;
                }
                i++;
            }
            j++;
        }
        return result;
    }
};