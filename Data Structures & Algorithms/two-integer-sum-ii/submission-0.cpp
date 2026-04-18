class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size() - 1;

        while (l < r){
            if (numbers[l] + numbers[r] == target) return std::vector<int>{l+1, r+1};
            while (numbers[l] + numbers[r] > target) r--;
            while (numbers[l] + numbers[r] < target) l++;
        }
        return std::vector<int>();
    }
};
