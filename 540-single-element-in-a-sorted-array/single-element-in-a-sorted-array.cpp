class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int s = 0;
        int e = arr.size() - 1;

        while (s < e) {
            int mid = s + (e - s) / 2;

            // Ensure mid is even (to check pairs correctly)
            if (mid % 2 == 1) {
                mid--;
            }

            // If pair is valid, the single element is on the right
            if (arr[mid] == arr[mid + 1]) {
                s = mid + 2;  // Move to the right half
            } else {
                e = mid;  // Move to the left half
            }
        }

        // The start index will be at the single element
        return arr[s];
    

    }
};