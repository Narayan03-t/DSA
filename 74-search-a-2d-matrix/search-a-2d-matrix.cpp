class Solution {
public:

    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int s = 0;
        int rowsize = matrix.size();
        int colsize = matrix[0].size();
        int n = rowsize * colsize;  // total element
        int e = n-1;
        int mid = s + (e-s)/2;

        while(s<=e){
            int rowindex = mid / colsize;
            int colindex = mid % colsize;

            if(matrix[rowindex][colindex] == target){
                return true;
            }
            if(target > matrix[rowindex][colindex]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
            mid = s + (e-s)/2;
        }

        return false;
    
    }
};