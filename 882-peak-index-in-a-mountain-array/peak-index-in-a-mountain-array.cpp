class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int s = 0;
        int n = arr.size();
        int e = n-1;
        int mid = s + (e-s)/2;
        int ansindex = -1;

        while(s<=e){
            if(arr[mid] < arr[mid+1]){
                s = mid + 1;
            }
            else{
                ansindex = mid;
                e = mid-1;
            }

            mid = s+ (e-s)/2;
        }

        return ansindex;

        // while(s<e){
        //     if(arr[mid] < arr[mid + 1]){
        //         s = mid + 1;  // increasing order line pe hai

        //     }
        //     else{
        //         // decreasing order line pe hai
        //         e = mid;
        //     }

        //     mid = s + (e-s)/2;
        // }

        // return mid;

        // int max = INT_MIN;
        // int index = -1;

        // for(int i=0;i<arr.size();i++){
        //     if(arr[i]>max){
        //         max = arr[i];
        //         index = i;
        //     }
        // }
        // return index;
        
    }
};