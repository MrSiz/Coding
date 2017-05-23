class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int length = nums.size();
        if (length == 0){
            return {-1, -1};
        }
        auto i = 0;
        int st = -1, ed = -1;
        while (i < length){
            if (nums[i] == target){
                st = ed = i;
                auto j = i + 1;
                while (j < length && nums[j] == target){
                    ++j;
                }
                ed = j - 1;
                i = j;
            }else{
                ++i;
            }
            
        }
        return {st, ed};
    }
};