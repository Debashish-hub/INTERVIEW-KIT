long long int maximizeSum(long long int a[], int n, int k)
    {
        // Your code goes here
        int i = 0;
        sort(a, a+n);
        while(i<n && a[i] < 0 && k){
            a[i] *= -1;
            i += 1;
            k -= 1;
        }
        if(i<n && a[i] != 0 && k%2 != 0)
            a[i] *= -1;
        if(i == n && k%2 != 0)
            a[n-1] *= -1;
        return accumulate(a, a+n, 0);
    }