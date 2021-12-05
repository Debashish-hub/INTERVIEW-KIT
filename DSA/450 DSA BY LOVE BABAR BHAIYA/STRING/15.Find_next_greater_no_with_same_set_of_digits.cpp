void reverse(vector<int>& arr, int start){
        int i = start, j = arr.size()-1;
        while(i < j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    
    vector<int> nextPermutation(int N, vector<int> arr){
        int i = N-2;
        while(i >=0 && arr[i+1] <= arr[i]){
            i--;
        }
        if(i >= 0){
            int j = N-1;
            while(arr[j] <= arr[i]){
                j--;
            }
            swap(arr[i],arr[j]);
        }
        reverse(arr,i+1);
        
        return arr;
    }