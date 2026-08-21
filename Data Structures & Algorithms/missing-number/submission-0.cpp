class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s= nums.size();
        int total= s * (s+1)/2;
        int sm=0;
        for (auto i:nums) sm+=i;
        return total-sm;
    }
};
