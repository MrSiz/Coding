class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int length = nums.size();
        if (length == 0){
            return 0;
        }
        for (auto i = 0; i < length; ++i){
            if (nums[i] >= target){
                return i;
            }
        }
        return length;
    }
};