class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>st;
        for (auto i:nums){
            if(st.find(i)==st.end()){
                st.insert(i);
            }else{
                return true;
            }
        }
        return false;
    }
};