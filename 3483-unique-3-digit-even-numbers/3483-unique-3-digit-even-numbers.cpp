class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        bool val[1000]{};
        int count=0;
        int x=0;
        for(int i=0; i<digits.size(); i++){
            if(digits[i]==0) continue;
            for(int j=0; j< digits.size(); j++){
                if(i==j) continue;
                for(int k=0;k<digits.size(); k++){
                    if(i==k || j==k || digits[k]%2!=0) continue;
                    x=100*digits[i]+10*digits[j]+ digits[k];
                    if(!val[x]){
                        val[x]=true;
                        count++;}
                }
            }
        }
        return count;
    }
};