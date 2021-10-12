int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      unordered_set<int> s(arr , arr+N);
      int res = 1;
      for(auto x:s){
          if(s.find(x-1) == s.end()){
              int c = 1;
              while(s.find(x+c) != s.end()){
                  c++;
              }
              res = max(res,c);
          }
      }
      return res;
    }