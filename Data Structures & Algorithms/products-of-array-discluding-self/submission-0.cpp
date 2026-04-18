class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        std::array<int, 1000> leftProd;
        std::array<int, 1000> rightProd;
        
        std::vector<int> answer;

        for (int i=0; i<nums.size(); i++){
           if (i == 0) leftProd[i] = nums[i];
           else leftProd[i] = nums[i] * leftProd[i-1];
        }

        for (int i=nums.size() -1; i>=0; i--){
            if ( i == nums.size() -1 ) rightProd[i] = nums[i];
            else rightProd[i] = nums[i] * rightProd[i+1];
        }

        for (int i=0; i<nums.size(); i++){
            if (i == 0) answer.push_back(rightProd[i+1]);
            else if (i == nums.size() - 1) answer.push_back(leftProd[i-1]);
            else answer.push_back(leftProd[i-1] * rightProd[i+1]);
        }

        return answer;
    }
};
