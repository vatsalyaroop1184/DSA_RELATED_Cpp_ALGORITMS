#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto&x : v){
        cin >> x;
    }
    if(n==0){
        return 0;
    }
    else{ 
    int curr_sum = v[0];
    int global_max_sum = v[0];
    for(int i = 1;i < n;i++){
         if(v[i] < curr_sum + v[i]){
            curr_sum = curr_sum + v[i];
         }
         else{
            curr_sum = v[i];
         }
         if(curr_sum > global_max_sum){
            global_max_sum = curr_sum;
         }
    }
    cout << "the maximum continuous sub-array sum is : " << global_max_sum ;
}

}