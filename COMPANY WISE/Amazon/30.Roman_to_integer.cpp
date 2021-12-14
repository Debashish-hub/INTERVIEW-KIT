int Solution::romanToInt(string A) {
    map<char, int> m;
    m.insert({ 'I', 1 });
    m.insert({ 'V', 5 });
    m.insert({ 'X', 10 });
    m.insert({ 'L', 50 });
    m.insert({ 'C', 100 });
    m.insert({ 'D', 500 });
    m.insert({ 'M', 1000 });
    int sum = 0;
    for (int i = 0; i < A.length(); i++)    {
        if (m[A[i]] < m[A[i + 1]]){
            sum+=m[A[i+1]]-m[A[i]];
            i++;
            continue;
        }else
            sum += m[A[i]];
    }
    return sum;
}
