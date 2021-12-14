string Solution::intToRoman(int A) {
    string ans;
    if(A >= 1000){
        int k = A/1000;
        while(k--)
            ans += 'M';
            A %= 1000;
    }
    if(A >= 500){
        if(A >= 900){
            ans += "CM";
            A %= 900;
        }else{
            ans += 'D';
            A %= 500;
        }    
    }
    if(A >= 100){
        if(A >= 400){
            ans += "CD";
            A %= 400;
        }else{
            int k = A/100;
            while(k--)
                ans+='C';
            A%=100;
        }    
    }
    if(A >= 50){
        if(A >= 90){
            ans += "XC";
            A %= 90;
        } else{
            ans += 'L';
            A%=50;
        }    
    }
    if(A >= 10){
        if(A >= 40){
            ans+="XL";
            A %=40;
        }else{
            int k=A /10;
            while(k--)
                ans+='X';
            A %= 10;
        }    
    }
    if(A >= 5){
        if(A == 9){
            ans+="IX";
            A %= 9;
        }else{
            ans += 'V';
            A %= 5;
        }    
    }
    if(A >= 1){
        if(A == 4)
            ans += "IV";
        else{
            while(A--)
                ans+='I';
        }    
    }
    return ans;
}
