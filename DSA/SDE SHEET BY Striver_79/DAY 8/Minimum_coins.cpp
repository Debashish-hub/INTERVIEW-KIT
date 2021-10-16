void findMin(int V)
{
    sort(deno, deno + n);
     vector<int> ans;
     for (int i = n - 1; i >= 0; i--) {
 
        while (V >= deno[i]) {
            V -= deno[i];
            ans.push_back(deno[i]);
        }
    }
 
    // Print result
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}
 