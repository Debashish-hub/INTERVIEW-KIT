int minSwaps(std::vector<int> &v)
{
    std::vector<pair<int,int> > t(v.size());
    int ans = 0;
    for(int i = 0; i < v.size(); i++)
        t[i].first = v[i], t[i].second = i;
     
    sort(t.begin(), t.end());
    for(int i = 0; i < t.size(); i++)
    {
        if(i == t[i].second)
            continue;
        else
        {
            swap(t[i].first, t[t[i].second].first);
            swap(t[i].second, t[t[i].second].second);
        }
         
        if(i != t[i].second)
            --i;
        ans++;
    }
    return ans;
}