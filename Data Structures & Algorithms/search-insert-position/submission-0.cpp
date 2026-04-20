class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;

        while (l<=r){
            int mid = (l+r)/2;
            int midVal = nums[mid];

            if (midVal == target) return mid;

            if (midVal < target){
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }

        return l;
    }
};