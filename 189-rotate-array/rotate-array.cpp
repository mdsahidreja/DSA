class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int>vec(n);
        int i;
        k = k%n;
        
        for(i = 0; i<n-k; i++){
            vec[i+k] = arr[i];
        }
       
        for(int j = 0; j<(k); j++){
            vec[j] = arr[i];
            i++;
        }
        
        for(int j = 0; j<n; j++){
            arr[j] = vec[j];
        }
    }
};