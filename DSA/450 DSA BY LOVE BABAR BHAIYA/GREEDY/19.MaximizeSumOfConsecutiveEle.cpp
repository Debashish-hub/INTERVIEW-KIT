int maxSum(int arr[], int n)
{
    int sum = 0;
 
    // Sorting the array.
    sort(arr, arr + n);
 
    // Subtracting a1, a2, a3,....., a(n/2)-1, an/2
    // twice and adding a(n/2)+1, a(n/2)+2, a(n/2)+3,.
    // ...., an - 1, an twice.
    for (int i = 0; i < n/2; i++)
    {
        sum -= (2 * arr[i]);
        sum += (2 * arr[n - i - 1]);
    }
 
    return sum;
}