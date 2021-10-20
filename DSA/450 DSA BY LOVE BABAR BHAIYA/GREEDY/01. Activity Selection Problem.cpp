    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
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