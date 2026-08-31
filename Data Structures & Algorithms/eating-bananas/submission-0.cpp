class Solution {
public:
    int canEat(vector<int>& piles,int &speed){
        int ans=0;
        for(int i=0;i<piles.size();i++){
            ans+=(piles[i]+speed-1)/speed;
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int need=0;
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        while(low<=high){
        int mid=low+(high-low)/2;
        
        if(canEat(piles,mid) <= h) high=mid-1;
        else low=mid+1;
        }
        return low;
    }
};
