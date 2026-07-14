class Solution {
public:
    void findlast(vector<int>& nums, int target,int s,int e,int n,int &last){
        int mid = s + (e-s)/2;
        while(s<=e){
            if(nums[mid] == target){
                last = mid;
                s = mid+1;
            }
            if(target > nums[mid]){
                s = mid+1;
            }
            if(target < nums[mid]){
                e = mid-1;
            }
            mid = s + (e-s)/2;
        }

        
    }
    void findfirst(vector<int>& nums, int target,int s,int e,int n,int &first){
        int mid = s + (e-s)/2;
        while(s<=e){
            if(nums[mid] == target){
                first = mid;
                e = mid-1;
            }
            if(target > nums[mid]){
                s = mid+1;
            }
            if(target < nums[mid]){
                e = mid-1;
            }
            mid = s + (e-s)/2;
        }

        
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        

        int first = -1;
        int last = -1;

        
        findfirst(nums,target,s,e,n,first);
        findlast(nums,target,s,e,n,last);
       
        return {first,last};
    }
};