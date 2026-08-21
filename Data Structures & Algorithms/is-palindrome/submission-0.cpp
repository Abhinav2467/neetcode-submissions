class Solution {
public:
    bool isPalindrome(string s) {
        string res;
        for(auto i:s){
            if(isdigit(i) || isalpha(i)){
                res+=tolower(i);
            }
        }
        int i=0;
        int j=res.length()-1;
        while(i<j){
            if (res[i]==res[j]){
                i++;
                j--;
            }else{
                return false;
            }
        }
        return true;
    }
};
