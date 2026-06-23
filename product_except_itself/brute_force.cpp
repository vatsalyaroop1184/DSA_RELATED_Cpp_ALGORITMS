#include <bits/stdc++.h>
using namespace std;
class solution{
    public:
    vector<int> brute_approach(vector<int>& v){
        int n = v.size();
        vector<int> res;
        for(int i = 0;i < n;i++){
            int prod = 1;
            for(int j = 0;j < n;j++){
                
                if(i != j){
                    
                     prod *= v[j];
                }
            }
            res.push_back(prod);
        }
        return res;
    }

};
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v){
        cin >> x;
    }
    vector<int> res(n);
    solution sol1;
    res = sol1.brute_approach(v);
    for(auto &x : res){
        cout << x << " ";
    }
    return 0;

}