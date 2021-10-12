void threeWayPartition(vector<int>& array,int a, int b)
    {
        // code here 
        int l=0, m =0, h= array.size()-1;
        while(m <= h){
            if(array[m] < a){
                swap(array[m] , array[l]);
                l++; m++;
            }else if(array[m] > b){
                swap(array[m], array[h]);
                h--;
            }else{
                m++;
            }
        }
    }