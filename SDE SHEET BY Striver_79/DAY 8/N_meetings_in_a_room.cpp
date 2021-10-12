#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code 
        vector<pair<int,int>> p;
        for(int i=0; i<n; i++){
            p.push_back({start[i], end[i]});
        }
        sort(p.begin(), p.end(), [](pair<int,int> a, pair<int,int> b){
           return a.second < b.second; 
        });
        int count = 1;
        pair<int,int> l = p[0];
        for(int i=1; i<n; i++){
            if(p[i].first > l.second){
                count++;
                l = p[i];
            }
        }
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends