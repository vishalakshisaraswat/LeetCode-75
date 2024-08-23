class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0; // Edge case: empty needle

        int haystackLen = haystack.size();
        int needleLen = needle.size();

        for (int i = 0; i <= haystackLen - needleLen; i++) {
            int j;
            for (j = 0; j < needleLen; j++) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
            }
            if (j == needleLen) {
                return i; // Found needle in haystack
            }
        }
        return -1; // Needle not found
    }
};
