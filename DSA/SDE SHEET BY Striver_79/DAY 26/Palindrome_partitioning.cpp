int palindromicPartition(string str){
        // code here
        int n = str.length();
        int cuts[n][n];
        bool pal[n][n];
        for (int i = 0; i < n; i++) {
            pal[i][i] = true;
            cuts[i][i] = 0;
        }
        for (int x = 2; x <= n; x++) {
            for (int i = 0; i < n - x + 1; i++) {
                int j = i + x -1;
                if (x == 2)
                    pal[i][j] = (str[i] == str[j]);
                else
                    pal[i][j] = (str[i] == str[j]) && pal[i + 1][j - 1];
                if (pal[i][j] == true)
                    cuts[i][j] = 0;
                else {
                    cuts[i][j] = INT_MAX;
                    for (int k = i; k <= j - 1; k++)
                        cuts[i][j] = min(cuts[i][j], cuts[i][k] + cuts[k + 1][j] + 1);
                }
            }
        }
        return cuts[0][n - 1];
    }