class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int length = nums.size();
        int i = 0, cnt = 0;
        while (i < length){
            int t = nums[i];
            int j = i + 1;
            for (; j < length;){
                if (nums[j] == t){
                    ++j;
                }else
                    break;
            }
            nums[cnt++] = t;
            i = j;
        }
        return cnt;
    }
};