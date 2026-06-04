#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> prices(n);
    for(auto& x : prices){
        cin >> x;
    }
    int best_buy = prices[0],max_profit = 0,best_sell = prices[1];
    int min_so_far = prices[0];
    
    for(int i = 1;i < n;i++){
        if(min_so_far > prices[i]){
            min_so_far = prices[i];
        }
        if(max_profit < prices[i] - min_so_far){
            max_profit = prices[i] - min_so_far;
            best_buy = min_so_far;
            best_sell = prices[i];
        }
    }
    
    cout << "The maximum profit we can attain is " << max_profit << "." << " the best point to buy is " << best_buy << " and best date to sell is " << best_sell;
    return 0;

}