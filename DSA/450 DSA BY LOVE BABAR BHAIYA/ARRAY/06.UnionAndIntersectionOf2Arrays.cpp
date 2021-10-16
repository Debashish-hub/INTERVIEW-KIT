
int doUnion(int a[], int n, int b[], int m)  { 
    unordered_set<int> s(a, a+n);
    for(int i=0; i<m; i++){
        s.insert(b[i]);
    }
    return s.size();
}



int doIntersection(int a[], int n, int b[], int m) {
    sort(a, a + n);
    sort(b, b + m);

    int i = 0, j = 0, ans = 0;

    while (i <= j) {
        if (a[i] == b[j]) {
            ans++;
            i++;
            j++;
        }
        else if (a[i] < b[j]) i++;
        else j++;
    }
    return ans;
}