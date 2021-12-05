int minFlips (string S)
{
    // your 
    int count1 = 0, count2 = 0;
    for(int i=0;i<S.length();i++){
       if((i%2==0 && S[i]=='1') || (i%2!=0 && S[i]=='0')) count1++;
       if((i%2==0 && S[i]=='0') || (i%2!=0 && S[i]=='1')) count2++;
    }
   return min(count1, count2);
}