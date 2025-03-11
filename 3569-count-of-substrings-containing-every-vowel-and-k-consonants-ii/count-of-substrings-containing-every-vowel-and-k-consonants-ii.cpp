class Solution {
public:
    bool isVowel(char ch){
        return ch == 'a' || ch == 'e'||ch == 'i' || ch == 'o'|| ch == 'u';
    }


    long countOfSubstrings(string word, int k) {
        int n = word.size();
        unordered_map<char, int>mp;
        vector<int>nextConsonant(n);//store the next consonsant of every char of word
        int lastConsonant = n;
        for(int i = n - 1; i>=0; i--){
            nextConsonant[i] = lastConsonant;
            if(!isVowel(word[i])){
                lastConsonant = i;
            }
        }
        long ans = 0;
        int i = 0;
        int j = 0;
        int cons = 0; 
        while(j < n){
            char ch = word[j];
            if(isVowel(ch)){
                mp[ch]++;
            }
            else{
                cons++;
            }

            while(cons > k){
                char ch = word[i];
                if(isVowel(ch)){
                    mp[ch]--;
                    if(mp[ch] == 0){
                        mp.erase(ch);
                    }
                }
                else{
                    cons--;
                }
                i++;
            }

            while(mp.size() == 5 && cons == k){
                int idx = nextConsonant[j];
                ans += (idx - j);
                char ch = word[i];
                if(isVowel(ch)){
                    mp[ch]--;
                    if(mp[ch] == 0){
                        mp.erase(ch);
                    }
                }
                else{
                    cons--;
                }
                i++;
            }
            j++;
        }
        return ans;
    }


        

    
};