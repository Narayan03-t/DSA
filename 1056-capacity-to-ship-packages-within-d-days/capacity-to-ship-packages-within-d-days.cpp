class Solution {
public:

    bool iscapacity(vector<int>& w,int d1,int capacity){
        int currload = 0;
        int day = 1;
        for(int x:w){
            if(currload+x<=capacity){
                currload+=x;
            }
            else{
                day++;
                currload=0;
                currload+=x;
            }
            
        }
        return day<=d1;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int s = *max_element(weights.begin(),weights.end());
        int e = 0;
        for(int i=0;i<weights.size();i++){
            e = e + weights[i];
        }
        int mid = s+(e-s)/2;
        int ans = e;
        while(s<=e){
            if(iscapacity(weights,days,mid)){
                ans = mid;
                e = mid-1;
            }
            else{
                s = mid+1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
        
    }
};