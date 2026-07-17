class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // // brute force
        // int ans = INT_MIN;
        // int index = -1;
        // int n = arr.size();
        // for(int i=0;i<n;i++){
        //     if(arr[i] > ans){
        //         ans = arr[i];
        //         index = i;
        //     }
        // }
        // return index;

        // method 2 Binary search store and compute
        int n = arr.size();
        int s = 0;
        int e = n-1;
        int mid = s + (e-s)/2;
        int ansIndex = -1;
        while(s<=e){
            if(arr[mid] < arr[mid+1]){
                // right me jaao
                s = mid + 1;
            }
            else{
                ansIndex = mid;
                e = mid-1;
            }
            mid  = s + (e-s)/2;
        }
        return ansIndex;



        // method 3
        // int n = arr.size();
        // int s = 0;
        // int e = n-1;
        // int mid = s + (e-s)/2;

        // while(s<e){
        //     if(arr[mid] < arr[mid+1]){
        //         // right me jaao (mtln line A pe hai jo strictly increasing order me hai)
        //         s = mid+1;
        //     }
        //     else{
        //          iss case me ans ho bhi skta hai nhi(line b me hai)
        //         e = mid;
        //     }
        //     mid = s + (e-s)/2;
        // }
        // return mid;
    }
};