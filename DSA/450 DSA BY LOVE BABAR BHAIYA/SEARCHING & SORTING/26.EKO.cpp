void solve() {
    long long n, m;
    cin >> n >> m;

    vector<long long> h(n), res(n);
    for (int i = 0;i < n;i++) cin >> h[i];
    sort(h.begin(), h.end());

    res[n - 1] = 0;
    int high = n - 1;
    for (int i = high - 1;i >= 0;i--) {
        res[i] = (high - i) * (h[i + 1] - h[i]) + res[i + 1];
    }

    int r = high;
    while (r >= 0 && res[r] < m) r--;

    if (res[r] == m) cout << h[r] << endl;
    else {
        long long ans = h[r] + (res[r] - m) / (high - r);
        cout << ans << endl;
    }
}