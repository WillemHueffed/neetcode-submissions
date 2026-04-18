class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> m;
        for (int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }

        for (const auto& [key, val] : m){
            if (val > 1 ) return true;
        }

        return false;

    }
};