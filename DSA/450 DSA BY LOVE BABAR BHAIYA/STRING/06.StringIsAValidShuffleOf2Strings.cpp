void shuffle() {
    string a = "xy", b = "12";
    string s2 = "y12x";
    int i = 0;
    int j = 0;
    for (auto& x : s2) {
        if (i < a.size() && x == a[i]) {
            i++;
        }
        else if (j < b.size() && x == b[j]) {
            j++;
        }
    }
    if (s2.size() == i + j && i == a.size() && j == b.size()) 
        cout << "yes" << endl;
    else 
        cout << "no" << endl;
}