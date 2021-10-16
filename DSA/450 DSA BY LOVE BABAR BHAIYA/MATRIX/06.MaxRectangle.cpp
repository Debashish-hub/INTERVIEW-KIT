int histogramArea(int *arr, int n)
{
    stack<int>s;
    int max_area=0,area=0;
    int i=0;
    while(i<n){
        if(s.empty() or arr[s.top()]<=arr[i]){
            s.push(i);
            i++;
        }
        else{
            int top=s.top();
            s.pop();
            if(s.empty()){
                area=arr[top]*i;
            }
            else{
                area=arr[top]*(i-s.top()-1);
            }
            max_area=max(area,max_area);
        }
    }
    while(!s.empty()){
        int top=s.top();
        s.pop();
        area=arr[top]*(s.empty()?i:(i-s.top()-1));
        max_area=max(area,max_area);
    }
    return max_area;
}


int maxArea(int M[MAX][MAX], int n, int m) {
    // Your code here
    int max_area = 0;
    int *arr = new int[m];
    for(int j=0;j<m;j++){
        arr[j] = M[0][j];
    }
    int curr_area = histogramArea(arr, m);
    max_area = max(curr_area, max_area);
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(M[i][j]==0){
                arr[j] =0;
            }
            else{
                arr[j]+=M[i][j];
            }
        }
        curr_area = histogramArea(arr,m);
        max_area = max(curr_area, max_area);
    }
    return max_area;
}
