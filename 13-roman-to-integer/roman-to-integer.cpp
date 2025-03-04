class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        unordered_map<char, int>roman = {//stores the numerical value of the roman letters
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int result = 0;
        for(int i = 0; i<n-1; i++){
            if(roman[s[i]]<roman[s[i+1]]){
                result = result - roman[s[i]];
            }
            else{
                result = result + roman[s[i]];
            }
        }
        return result + roman[s[n-1]];
    }
};