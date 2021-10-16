//O(N) Time complexity
    void swap(int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
    }
    void sort012(int a[], int n)
    {
        // coode here 
        int low = -1, mid = -1, high = n-1;
        while(mid <= high){
            if(a[mid] == 0){
                swap(a[low],a[mid]);
                low ++;
                mid++;
            }else if(a[mid] == 1){
                mid++;
            }else{
                swap(a[mid],a[high]);
                high--;
            }
        }
    }
//----------------------------------------------------------------------------------------------------------------------------------------//

// O(N) Time complexity
void sortArr(int arr[], int n){
    int i, cnt0 = 0, cnt1 = 0, cnt2 = 0;
 
    for (i = 0; i < n; i++) {
        switch (arr[i]) {
        case 0:
            cnt0++;
            break;
        case 1:
            cnt1++;
            break;
        case 2:
            cnt2++;
            break;
        }
    }
    i = 0;
    while (cnt0 > 0) {
        arr[i++] = 0;
        cnt0--;
    }
    while (cnt1 > 0) {
        arr[i++] = 1;
        cnt1--;
    }
    while (cnt2 > 0) {
        arr[i++] = 2;
        cnt2--;
    }
}