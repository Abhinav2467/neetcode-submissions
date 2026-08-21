class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int,int>mp;
        for(auto i:s){
            if(mp.find(i)==mp.end()){
                mp[i]=1;
            }else{
                mp[i]+=1;
            }
        }
        for(auto i:t){
            if(mp.find(i)==mp.end()) return false;
            mp[i]-=1;
        }
        for(auto i:mp){
            if(i.second != 0) return false;
        }
        return true;
    }
};
