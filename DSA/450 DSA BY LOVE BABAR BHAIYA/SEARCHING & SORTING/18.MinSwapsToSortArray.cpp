int minSwaps(vector<int>&arr)
	{
	    // Code here
	    int n = arr.size();
	    vector<pair<int,int>> vec(n);
     
        for(int i=0;i<n;i++){
            vec[i].first=arr[i];
            vec[i].second=i;
        }
     
        sort(vec.begin(),vec.end());
     
        int ans=0,c=0,j;
     
        for(int i=0;i<n;i++){  
            if(vec[i].second==i)
                continue;
            else{
                swap(vec[i].first,vec[vec[i].second].first);
                swap(vec[i].second,vec[vec[i].second].second);
            }
            if(i!=vec[i].second)
                --i;
            ans++;
        }
     
        return ans;
	}