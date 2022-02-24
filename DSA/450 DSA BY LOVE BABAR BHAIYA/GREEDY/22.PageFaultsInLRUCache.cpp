int pageFaults(int N, int C, int pages[]){
        // code here
       int faults=0;
       vector<int>v;
       int j=0;
       for(int i=0;i<N;i++){
          auto it=find(v.begin(),v.end(),pages[i]);
          if(it==v.end()){
              if(v.size()==C)
                  v.erase(v.begin());
              faults++;
          }
          else
              v.erase(it);
           v.push_back(pages[i]);
       }
    return faults;
    }