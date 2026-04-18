class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        vector<vector<int>> answer; 

        for (int i = 0; i < nums.size(); i++) {
            // if (nums[i] > 0) break;
            if (i > 0 && nums[i] == nums[i-1]) continue;
            int target = nums[i];
            int l = i+1;
            // while (nums[l] == target) l++;
            int r = nums.size()-1;
            // while (nums[r] == target) r--;

            // vector<int> triplet;

            while (l < r ){
                if (nums[l] + nums[r] + target == 0){
                    // triplet.push_back(target);
                    // triplet.push_back(nums[l]);
                    // triplet.push_back(nums[r]);
                    answer.push_back({target, nums[l], nums[r]});
                    l++;
                    r--;
                    while (l < r && nums[l] == nums[l - 1]) {
                        l++;
                    }
                }
                else if (nums[l] + nums[r] + target > 0){
                    r--;
                    // while (nums[r] == target) r--;
                }
                else if (nums[l] + nums[r] + target < 0){
                   l++;
                //    while (nums[l] == target) l++; 
                }
            }
        }

        return answer;
    }
};
