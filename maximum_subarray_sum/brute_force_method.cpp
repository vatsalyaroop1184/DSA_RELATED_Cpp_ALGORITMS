#include <bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto&x : v){
        cin >> x;
    }
    int max_sum = INT_MIN;
    for(int i = 0;i < n;i++){
        for(int j = i;j < n;j++){
              int temp_sum = 0;
              int t = i;
             while(t <= j){
                temp_sum += v[t];
                t++;
             }
              if(temp_sum > max_sum){
                max_sum = temp_sum;
              }
        }
    }
    cout << "Max_sum : " << max_sum;
    return 0;
}