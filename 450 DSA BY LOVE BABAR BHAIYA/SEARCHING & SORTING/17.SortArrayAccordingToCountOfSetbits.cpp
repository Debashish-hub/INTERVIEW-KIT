static bool compare(int a , int b){
        int count1 = 0 , count2 = 0 , x,y;
        x=a;
        y=b;
        while(x != 0){
            count1 ++;
            x = x&(x-1);
        }
        while(y != 0){
            count2 ++;
            y = y&(y-1);
        }
        return count1 > count2;
    }
    void sortBySetBitCount(int arr[], int n)
    {
        // Your code goes here
        stable_sort(arr , arr + n , compare);
    }