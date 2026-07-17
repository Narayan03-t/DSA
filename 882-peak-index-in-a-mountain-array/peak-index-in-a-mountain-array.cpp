class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // brute force
        int ans = INT_MIN;
        int index = -1;
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(arr[i] > ans){
                ans = arr[i];
                index = i;
            }
        }
        return index;
        // int n = arr.size();
        // int s = 0;
        // int e = n-1;
        // int mid = s + (e-s)/2;

        // while(s<=e){
        //     if(arr[mid] < arr)
        // }
    }
};