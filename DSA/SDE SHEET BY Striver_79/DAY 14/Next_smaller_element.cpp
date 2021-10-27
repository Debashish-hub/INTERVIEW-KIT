void printNSE(int arr[], int n)
{
    stack<pair<int, int> > s;
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        int next = arr[i];
        if (s.empty()) {
            s.push({ next, i });
            continue;
        }
        while (!s.empty() && s.top().first > next) {
            ans[s.top().second] = next;
            s.pop();
        }
        s.push({ next, i });
    } 
    while (!s.empty()) {
        ans[s.top().second] = -1;
        s.pop();
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ---> " << ans[i] << endl;
    }
}