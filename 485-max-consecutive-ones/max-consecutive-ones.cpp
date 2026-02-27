class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOnes = 0;
        int temp = 0;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            if(nums[i] == 1){
                temp++;
                if(temp > maxOnes){
                    maxOnes = temp;
                }
            }
            else{
                temp = 0;
            }
        }
        
        return maxOnes;
    }
};