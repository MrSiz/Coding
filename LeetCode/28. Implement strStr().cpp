class Solution {
public:
    int strStr(string haystack, string needle) {
        int length1 = haystack.size();
        int length2 = needle.size();
        if (length2 == 0){
            return 0;
        }
        int j = 0;
        for (int i = 0; i < length1 - length2 + 1; ++i){
            if (haystack[i] == needle[j]){
                int pos = i;
                while (i < length1 && j < length2 && haystack[i] == needle[j]){
                    ++i, ++j;
                }
                if (j == length2){
                    return pos;
                }
                i = pos;
                j = 0;
            }
        }
        return -1;
    }
};