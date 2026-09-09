class Solution {
public:
    long long countCommas(long long n) {
        long long a=0;
        
        if(n>=1000) {
            a+= (n-1000)+1;}
        if(n>=1000000) a+= (n-1000000)+1;
        if(n>=1000000000) a+=(n-1000000000)+1;
        if(n>=1000000000000) a+=(n-1000000000000)+1;
        if(n>=1000000000000000) a+=(n-1000000000000000)+1;
        return a;
    }
};