class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        //update colors array to make it circular
        for(int i = 0; i<k-1; i++){
            colors.push_back(colors[i]);
        }
        int n = colors.size();
        int answer = 0;

        int i = 0;
        int j = 1;
        while(j<n){
            if(colors[j] == colors[j-1]){//if the current group is not alternating 
                i = j;
            }
            if(j-i+1 == k){
                answer++;
                i++;
            }
            j++;
        }
        return answer;
    }
};