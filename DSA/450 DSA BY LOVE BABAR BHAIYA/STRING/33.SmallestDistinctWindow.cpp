string findSubString(string str)
    {
        // Your code goes here   
         int n = str.length();
       unordered_map<char,int> u;
       for(int i=0;i<n;i++){
           u[str[i]]=0;
       }
       int i=0,j=0,ans=INT_MAX,count=0;
       string res;
       while(j<n){
           if(u[str[j]]==0) count++;
           u[str[j]]+=1;
           
           if(count==u.size()){
               while(i<n && u[str[i]]>1){
                   u[str[i]]--;
                   i++;
               }
               if(ans > (j-i+1)){
                   ans = j-i+1;
                   res = str.substr(i,j-i+1);
               }
           }
           j++;
       }
       return res;
    }