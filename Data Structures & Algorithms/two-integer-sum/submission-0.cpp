class Solution {

public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int> m;

       for (int i=0; i<nums.size(); i++){
        int comp = target - nums[i];
        int curr = nums[i];
        if (m.contains(comp)) {
            return std::vector<int>({m[comp], i});
        }
        m[nums[i]] = i; 
       }

    /*
    Iterate over array
    generate complement
    if (complement is key in map)
        return [val of map, curr index]
    else
        add key=curr val, index = i to map
    */
    
    }
};
