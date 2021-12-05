int countRev (string s)
{
    // your code here
    if(s.length() & 1)
     return -1;
     char *it=(char*)s.c_str();
     int open=0,close=0;
    while(*it)
    {
      if(*it=='{')
        open++;
      else if(!open)
          close++;
        else
          open --;
      it++;
    }
    
    return ((open+1)>>1) + ((close+1)>>1);
}