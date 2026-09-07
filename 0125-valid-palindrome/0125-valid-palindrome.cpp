class Solution {
public:
    bool isPalindrome(string s) {
        string r="";
        for(int i=0; i<s.length(); i++){
            if(isalnum((unsigned char)s[i]))  r+=tolower(s[i]);
        }
        int left=0, right=r.length()-1;
        while(left<=right){
            if(r[left]==r[right]){
                left++;
                right--;
            }else return false;
        }
        return true;
    }
};