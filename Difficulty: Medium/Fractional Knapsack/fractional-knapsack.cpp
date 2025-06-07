// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

class Solution {
  public:
    double fractionalKnapsack(vector<int>& pt, vector<int>& wt, int M) {
        // code here
        int n = pt.size();
        vector<tuple<float, int, int>>items(n);
        for(int i = 0; i<n; i++){
            float ratio = (float)pt[i]/wt[i];
            items[i] = make_tuple(ratio, pt[i], wt[i]);
        }
        sort(items.rbegin(), items.rend());
        vector<double>X(n, 0);
        int cu = M;
        int i;
        for( i = 0; i<n; i++){
            float ratio;
            int profit_i;
            int weight_i;
            tie(ratio, profit_i, weight_i) = items[i];
            if(weight_i > cu) break;
            X[i] = 1;
            cu = cu - weight_i;
        }
        if(i<n){
            float ratio;
            int profit_i;
            int weight_i;
            tie(ratio, profit_i, weight_i) = items[i];
            X[i] = (double)cu/weight_i;
        }
        double profit = 0;
        for(int i = 0; i<n; i++){
            float ratio;
            int profit_i;
            int weight_i;
            tie(ratio, profit_i, weight_i) = items[i];
            profit += X[i]*profit_i;
        }
        return profit;
        
    }
};
