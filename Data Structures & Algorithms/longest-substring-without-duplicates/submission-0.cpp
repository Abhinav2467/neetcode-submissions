class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int count=0;
        int maxcnt=0;
        int left=0;
        for (int right =0;right<s.length();right++){
            if(mp.find(s[right])==mp.end()){
                mp[s[right]]++;
                count++;
            }else{
                while(mp[s[right]]>=1){
                    count--;
                    mp[s[left]]--;
                    if(mp[s[left]]==0) mp.erase(s[left]);
                    left++;
                }
                mp[s[right]]++;
                count++;
            }
            if(right-left+1 == mp.size()) maxcnt=max(count,maxcnt);
        }
        return maxcnt;
    }
};
