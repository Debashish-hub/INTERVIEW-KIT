int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        if(n>m){
            return kthElement(arr2, arr1, m, n, k);
        }
        int lo = max(0, k-m), hi = min(n,k);
        while(lo <= hi){
            int c1 = (lo + hi) >> 1;
            int c2 = k - c1;
            int l1 = (c1 == 0) ? INT_MIN : arr1[c1-1];
            int l2 = (c2 == 0) ? INT_MIN : arr2[c2-1];
            int r1 = (c1 == n) ? INT_MAX : arr1[c1];
            int r2 = (c2 == m) ? INT_MAX : arr2[c2];
            
            if(l1 <= r2 && l2 <= r1)return max(l1, l2);
            else if(l1 > l2)hi = c1 -1;
            else lo = c1 + 1;
        }
        return 1;
    }