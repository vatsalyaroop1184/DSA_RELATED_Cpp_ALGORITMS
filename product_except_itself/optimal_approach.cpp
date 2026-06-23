#include <bits/stdc++.h>
using namespace std;
class solution{
    public:
    vector<int> optimal_sol(vector<int> v){
        int n = v.size();
        vector<int> ans(n,1);
        vector<int> preffix(n,1);
        vector<int> suffix(n,1);
        for(int i = 1;i < n;i++){
            preffix[i] = preffix[i-1]*v[i-1];

        }
        for(int j = n-2;j >= 0;j--){
            suffix[j] = suffix[j+1]*v[j+1];
        }

        for(int k = 0;k < n;k++){
          ans[k] = (suffix[k])*(preffix[k]);
        }
        return ans;
    }
};
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto& x : v){
        cin >> x;
    }

    solution sol;
    vector<int> res = sol.optimal_sol(v);
    for(auto& x:res){
        cout << x << " ";

    }
    return 0;
}