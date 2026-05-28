 #include <bits/stdc++.h>
 using namespace std;

int brute_force(vector<int> v){
        int n = v.size();
        
        for(int i = 0;i < n ;i++){
            int freq = 0;
            for(int j = 0;j < n;j++){
                
                if(v[i] == v[j]){
                    freq++;
            }
        }
            if(freq > n/2){
                    return v[i];
                }
    }
     return -1;
}
int better_approach(vector<int> v){
    int n = v.size();
    sort(v.begin(),v.end());
       int freq = 1;
    for(int i = 1;i < n;i++){
        if(v[i] == v[i-1]){
            freq++;
        }
        else{
            freq = 1;
        }

        if(freq > n/2){
            return v[i];
        }
    }
    return -1;
}
int  moore_voting_algo(vector<int> v){
    int n = v.size();
    int freq = 0;int ans = 0;
    for(int i = 0;i < n;i++){
        if(freq == 0){
            ans = v[i];
        }
        if(ans = v[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}


int main(){

    vector<int> v;
    int x;
    while(cin >> x){
        v.push_back(x);
    }
    
    if(v.empty()){
        cout << "No elements entered!" << endl;
        return 0;
    }
    int ans1 = brute_force(v);
    int ans2 = better_approach(v);
    int ans3 = moore_voting_algo(v);
    cout << ans1 <<"," << ans2 << "," << ans3;
    return 0;
 }