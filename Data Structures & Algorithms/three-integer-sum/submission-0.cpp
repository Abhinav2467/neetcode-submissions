class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        int i =0;
        for(i=0;i<nums.size();i++){
            if(i>0 && nums[i-1]==nums[i]) continue;
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum == 0){
                    res.push_back({nums[i],nums[j],nums[k]});
                    while(j<k && nums[j]==nums[j+1])j++;
                    while(j<k && nums[k]==nums[k-1]) k--;
                    j++;
                    k--;
                }else if(sum<0) j++;
                else k--;
            }
        }
        return res;
    }
};
