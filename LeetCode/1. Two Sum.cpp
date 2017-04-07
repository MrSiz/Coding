class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> u_m;
        int length = nums.size();
        for (int i = 0; i < length; ++i){
            u_m[nums[i]] = i + 1;
        }
        for (int i = 0; i < length; ++i){
            int val = target - nums[i];
            int index = u_m[val];
            if (index != 0 && index - 1!= i)
                return {i, index - 1};
        }
        return {};
    }
};