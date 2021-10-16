
//Iterative approach
// Time Complexity: O(N)
void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

//----------------------------------------------------------------------------------------------------------------------------------------//


//Recursive approach
// Time Complexity: O(N)
void rvereseArray(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    rvereseArray(arr, start + 1, end - 1);
}