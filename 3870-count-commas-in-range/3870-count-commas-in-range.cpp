class Solution {
public:
    int countCommas(int n) {
        int count =0;
        int r=n;
        while(r>0){
        r= r/10;
        count++;
        }
        if(count<4) return 0;
        else if(count >=4) return ((n-1000)+1);
        // else if(count ==5) return (n-1000)+1;
        // else if(count==6) return (n-100000)+1;
    return 0;
    }
};