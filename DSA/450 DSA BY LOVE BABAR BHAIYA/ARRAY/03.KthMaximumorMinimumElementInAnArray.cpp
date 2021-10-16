
//O(N) Average case
int Kth_smallest(map<int, int> m, int k)
{
    int freq = 0;
    for (auto it = m.begin(); it != m.end(); it++) {
        freq += (it->second);
        if (freq >= k) {
            return it->first;
        }
    }
    return -1;
}


//----------------------------------------------------------------------------------------------------------------------------------------//


//O(N) worst case
    void swap(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    int randomPartition(int arr[], int l, int r)
    {
        int n = r-l+1;
        int pivot = rand() % n;
        swap(&arr[l + pivot], &arr[r]);
        return partition(arr, l, r);
    }
    int kthSmallest(int arr[], int l, int r, int k)
    {
        if (k > 0 && k <= r - l + 1)
        {
            int pos = randomPartition(arr, l, r);
            
            if (pos-l == k-1)
                return arr[pos];
                
            if (pos-l > k-1)  
                return kthSmallest(arr, l, pos-1, k);
            return kthSmallest(arr, pos+1, r, k-pos+l-1);
        }
    
        return INT_MAX;
    }
     
    int partition(int arr[], int l, int r)
    {
        int x = arr[r], i = l;
        for (int j = l; j <= r - 1; j++)
        {
            if (arr[j] <= x)
            {
                swap(&arr[i], &arr[j]);
                i++;
            }
        }
        swap(&arr[i], &arr[r]);
        return i;
    }