class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        //update the colors array as it is circular
        for(int i = 0; i<k-1; i++){
            colors.push_back(colors[i]);
        }


        int n = colors.size();
        int i = 0;
        
        int answer = 0;
        for(int j = 1; j<n; j++){
            
            if(colors[j] == colors[j-1]){
                // j is not alternating
                i = j;
                
               //skip the current window and go to the next window
            }

            if(j-i+1 == k){
                answer++;
                i++;
            }
        }
        return answer;
    }
};