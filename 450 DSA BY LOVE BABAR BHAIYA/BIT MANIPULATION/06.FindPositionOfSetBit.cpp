int findPosition(int N) {
        // code here
        if(N &(N-1) || N==0){
            return -1;
        }
        return log2(N)+1;
    }