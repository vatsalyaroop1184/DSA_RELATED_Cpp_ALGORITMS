-> here in the optimal approach we can make space complexity less by taking like

""
   vector<int> ans;
   int preffix = 1;
   for(int i = 1;i < n;i++){
      ans[i] *= v[i-1];
   }
   int suffix = 1;
   for(int j = n-2;j >=0;j--){
    suffix *= v[j+1];
    ans[j] *= suffix
   }

   ""
   rather than taking two vectors suffix and preffix

   brute force T.C -> O(n^2)
   optimal approach  T.C ->O(n) and S.C is O(1)
