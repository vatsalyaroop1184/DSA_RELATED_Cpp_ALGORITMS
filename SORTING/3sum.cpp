#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threesumtozero_triads(vector<int> &nums){
    vector<int> result;
    int n = nums.size();
        sort(nums.begin(), nums.end());
    for(int i = 0;i < n - 2;i++){
        if(i >0 && nums[i] == nums[i-1]){
            continue;
        }
        if(nums[i] > 0){
            break;

        }
    }
//use result.pushback to append triads in result
}