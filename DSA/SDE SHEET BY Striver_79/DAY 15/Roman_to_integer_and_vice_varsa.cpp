int romanToInt(string str) {
        map<char, int> m;
        m.insert({ 'I', 1 });
        m.insert({ 'V', 5 });
        m.insert({ 'X', 10 });
        m.insert({ 'L', 50 });
        m.insert({ 'C', 100 });
        m.insert({ 'D', 500 });
        m.insert({ 'M', 1000 });
        int sum = 0;
        for (int i = 0; i < str.length(); i++)
        {
            /*If present value is less than next value,
              subtract present from next value and add the
              resultant to the sum variable.*/
            if (m[str[i]] < m[str[i + 1]])
            {
                sum+=m[str[i+1]]-m[str[i]];
                i++;
                continue;
            }else
                sum += m[str[i]];
        }
        return sum;
    }

    ////////////////////////////////////////////////////////////////////////////////////////


    string intToRoman(int num) 
    {
        string res;
        string sym[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        
        for(int i=0; num != 0; i++)
        {
            while(num >= val[i])
            {
                num -= val[i];
                res += sym[i];
            }
        }
        
        return res;
    }