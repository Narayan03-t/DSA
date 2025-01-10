class Solution {
public:

    void findfirstoccurence(vector<int>arr, int n, int target, int &firstindex){
    
    // Apply Binary search
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2 ;

    while(s<=e){
        if(arr[mid]==target){
            firstindex = mid;
            e = mid - 1;
        }
        if(target<arr[mid]){
            e = mid - 1;
        }
        if(target>arr[mid]){
            s = mid + 1;
        }

        mid = s + (e-s)/2;
    }
}

void lastoccurence(vector<int>arr, int n, int target, int &lastindex){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2 ;

    while(s<=e){
        if(arr[mid]==target){
            lastindex = mid;
            s = mid + 1;
        }
        if(target<arr[mid]){
            e = mid - 1;
        }
        if(target>arr[mid]){
            s = mid + 1;
        }

        mid = s + (e-s)/2;
    }

}

    vector<int> searchRange(vector<int>& arr, int target) {
        int n = arr.size();

        int firstindex = -1;
        int lastindex = -1;

        findfirstoccurence(arr, n, target, firstindex);
        lastoccurence(arr, n, target, lastindex);

        vector<int>temp(2);
        temp[0]= firstindex;
        temp[1]= lastindex;
        return temp;
    }
    
   
};