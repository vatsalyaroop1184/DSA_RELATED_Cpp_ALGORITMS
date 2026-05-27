#include <bits/stdc++.h>
using namespace std;
vector <pair<int,int>> brute_force(vector<int> nums,int target){
    int n = nums.size();
   vector <pair<int,int>>  res;
    
    for(int i = 0;i < n - 1;i++){
        for(int j = i+1;j < n;j++){
            if(nums[i] + nums [j] == target){
                res.push_back(make_pair(nums[i], nums[j]));
            }
        }
    }
    return res;
}

vector <pair<int,int>> better_approach(vector<int> nums,int target){// needed sorted array and O(n) is time complexity
               int n = nums.size();
               sort(nums.begin(),nums.end());
                vector <pair<int,int>>  res;
                int i = 0;
                int j = n-1;
                while(i < j){
                    int p = nums[i] + nums[j];
                    if(p < target){
                        i++;
                    }
                    else if(p > target){
                        j--;
                    }
                    else{
                        
                        res.push_back(make_pair(nums[i],nums[j]));
                        i++;
                        j--;
                    }

                }
                return res;
}




int main(){
    int n ,target;
    cin >> n >> target;
    vector<int> v(n);
    for(auto& x : v){
        cin >> x;
    }
   
    auto res1 = brute_force(v,target);
    auto res2 = better_approach(v,target);
    for(auto&x : res1){
        cout << "("<< x.first << "," << x.second << ")" ;
    }
    cout << endl;
    for(auto&x : res2){
        cout << "("<< x.first << "," << x.second << ")" ;
    }
    return 0;
}
