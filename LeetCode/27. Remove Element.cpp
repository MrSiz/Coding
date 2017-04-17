class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length = nums.size();
        int i = 0, cnt = 0;
        while (i < length){
            if (nums[i] != val){
                nums[cnt++] = nums[i];
            }
            ++i;
        }
        return cnt;
    }
};