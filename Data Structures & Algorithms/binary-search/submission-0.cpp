class Solution {
public:
    int search(vector<int>& nums, int target) {

        int l = 0;
        int r = nums.size() - 1;

        while (l <= r){
            int mid = (l + r)/2;
            int midval = nums[mid];
            cout << "L: " << l << " - R: " << r << " - Mid: " << mid << endl;
            if (midval == target) return mid;

            if (midval < target){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        return -1;
    }
};
