class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i =0;
        int j=heights.size()-1;
        int maxval=0;
        while(i<j){
            int level = min(heights[i],heights[j]);
            int curr=level*(j-i);
            maxval=max(maxval,curr);
            if (heights[i]<heights[j]){
                i++;
            }else{
                j--;
            }
        }
        return maxval;
    }
};
