class Solution {
public:
    int trap(vector<int>& height) {
        int i =0;
        int j = height.size()-1;
        int ans=0;
        int left=0;
        int right=0;
        while(i<j){
            if(height[i]<height[j]){
                left=max(left,height[i]);
                ans+=left-height[i];
                i++;
            }else{
                right=max(right,height[j]);
                ans+=right-height[j];
                j--;
            }
        }
        return ans;
    }
};
