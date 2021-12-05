int wordBreak(string A, vector<string> &B) {
         
         bool dp[A.size()]={0};
         //dict set to 
         set<string> dict;
         for(auto itr : B) 
            dict.insert(itr);
         
         bool state=true;
         for(int len=1; len<=A.size(); len++){
            int i = 0;
            int j = len-1;
            string temp;
            for(int k=0; k<=j; k++) {
              temp.push_back(A[k]);
              state *= dp[k];
            }
            while(j < A.size()){    
                if(dict.find(temp) != dict.end() && !state){
                  for(int k=i; k<=j; k++)
                  dp[k] = true;
                }                                     
                j++;
                i++;
                temp.erase(0,1);
                temp.push_back(A[j]);
            }
        }
      
       state = true;
       for(int i=0;i<A.size();i++)
        state *= dp[i];
      
       return state;        
         
  }