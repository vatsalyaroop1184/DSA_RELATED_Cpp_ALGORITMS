#include <bits/stdc++.h>
using namespace std;
class solution{
    public:
    int max_container_area(vector<int>& heights){
        int n = heights.size();
        int l = 0;
        int r = n-1;
        int max_area = 0;
        while(l < r){
            int current_area = min(heights[r],heights[l])*(r-l);
            max_area = max(max_area,current_area);
            if(heights[l] < heights[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return max_area;
    }
};

int main(){
    
    int n;
    cin >> n;
    vector<int> heights(n);
    for(auto &x : heights){
        cin >> x;
    }
    solution sol;
    int result = sol.max_container_area(heights);
    cout << "the max water filled area is " << result << endl;
    return 0;

}
