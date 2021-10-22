static bool com(Job a,Job b){
        return a.profit>b.profit;
    }
    vector<int> JobScheduling(Job arr[], int n) { 
        // your code here
        sort(arr,arr+n,com);
        bool check[n+1] = {0};
        
        int profit = 0;
        int noOfJobs = 0;
        
        for(int i=0;i<n;i++){
            for(int j=min(n,arr[i].dead); j>=1; j--){
                if(check[j]==0){
                    profit+=arr[i].profit;
                    noOfJobs++;
                    check[j] = 1;
                    break;
                }
            }
        }
        return {noOfJobs, profit};
    } 