bool helper(int sum,int s,int k,bool arr[],int ind,int n,int a[]){
        if(k == 1)
            return true;
        if(sum > s)
            return false;
        if(sum == s){
            return helper(0,s,k - 1,arr,0,n,a);
        }
        for(int i  = ind;i < n ; i ++){
            if(arr[i] == false){
                arr[i] = true;
                if(helper(sum + a[i],s,k,arr,i + 1,n,a))
                    return true;
                else  arr[i] = false;
            }
        }
        return false;
    }
    bool isKPartitionPossible(int a[], int n, int k){
        if(k == 0)
            return 0;
        if(k == 1)  
            return 1;
        int sum = 0;
        for(int i = 0; i < n ; i ++){
            sum += a[i];
        }
        if(sum % k != 0) return false;
        bool arr[n] = {false};
        return helper(0,sum / k,k,arr,0,n,a);
    }