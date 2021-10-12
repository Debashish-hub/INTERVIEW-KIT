
//Check if palindrome
bool isPalindrom(int n) {
    string a = to_string(n);
    int i = 0, j = a.size() - 1;
    while (i <= j) {
        if (a[i] != a[j]) return false;
        i++;
        j--;
    }
    return true;
}
int PalinArray(int a[], int n)
{  //add code here.
    for (int i = 0;i < n;i++) {
        if (!isPalindrom(a[i])) return 0;
    }
    return 1;
}

// ----------------------------------------------------------------------------------------------------------------------- //

//Find minimum number of merge operations to make an array palindrome

int findMinOps(int arr[], int n)
{
    int ans = 0; 
 
    for (int i=0,j=n-1; i<=j;)
    {
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else if (arr[i] > arr[j])
        {
            j--;
            arr[j] += arr[j+1] ;
            ans++;
        }
 
        else
        {
            i++;
            arr[i] += arr[i-1];
            ans++;
        }
    }
 
    return ans;
}