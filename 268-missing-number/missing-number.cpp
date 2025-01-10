class Solution {
public:
    int missingNumber(vector<int>& arr) {
        sort(arr.begin(),arr.end());

        int ansindex = -1;
        
        int n = arr.size();
        int s = 0;
        int e = n-1;
        int mid = s + (e-s)/2;

        while(s<=e){
            int number = arr[mid];
            int index = mid;
            int diff = number - index;

            if(diff == 0){
            s = mid + 1;
            }
            else if(diff == 1){
            ansindex = index;
            e = mid - 1;
            }

            mid = s + (e-s)/2;
        }
        if(ansindex == -1){
            return n;
        }
       

        

        
        return ansindex;
    }
};