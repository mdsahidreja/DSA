class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        unordered_map<char, int>mp;

        int i = 0;
        int j = 0;
        int ans = 0;
        while(j<n){
            char ch = s[j];
            mp[ch]++;
            while(mp.size() == 3){
                ans += (n-j);
                char ch = s[i];
                mp[ch]--;
                if(mp[ch] == 0){
                    mp.erase(ch);
                }
                i++;
            }
            j++;
        }
       
        return ans;
        
    }
};