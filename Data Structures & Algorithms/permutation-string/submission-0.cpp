class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>mp1;
        int n=s1.length();
        for(int i =0;i<n;i++){
            mp1[s1[i]]++;
        }
        unordered_map<char,int>mp2;
        int left=0;
        for(int i =0;i<s2.length();i++){
            mp2[s2[i]]++;
            if(i-left+1>n){
                mp2[s2[left]]--;
                if(mp2[s2[left]]==0) mp2.erase(s2[left]);
                left++;
            }
            if(i-left+1==n){
                if(mp2==mp1){
                    return true;
                }
            }
        }
        return false;
    }
};
