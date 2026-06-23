#include<bits/stdc++.h>
using namespace std;

class solution{
        public:
        int max_area(vector<int>& heights){
            int n = heights.size();
            int global_max = min(heights[0],heights[1]);
            for(int i = 0;i < n-1;i++){
                for(int j = i + 1;j < n;j++){
                    int area = min(heights[i],heights[j])*(j-i);
                    global_max = max(global_max,area);
                }
            }
            return global_max;
        }
        

        };

int main(){
    vector<int> heights;
    int n;
    
    cin >> n;
    for(int i = 0; i < n; i++) {
        int h;
        cin >> h;
        heights.push_back(h);
    }
    solution sol1;
    int result = sol1.max_area(heights);
    cout << "max water can be filled is" << result << endl;
      
    return 0;

    }
