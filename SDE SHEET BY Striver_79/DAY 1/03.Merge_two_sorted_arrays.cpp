void mergeArray(int arr1[], int arr2[],  int n, int m){
     
    for(int i = 0; i < n; i++){
        if (arr1[i] > arr2[0]){
             
            int temp = arr1[i];
            arr1[i] = arr2[0];
            arr2[0] = temp;
            int firstElement = arr2[0];
            int k; 
            for(k = 1; k < m && arr2[k] < firstElement; k++){
                arr2[k - 1] = arr2[k];
            }
            arr2[k - 1] = firstElement;
        }
    }
     
    for(int i = 0; i < n; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
 
    for(int i = 0; i < m; i++){
        cout << arr2[i] << " ";
    }
}