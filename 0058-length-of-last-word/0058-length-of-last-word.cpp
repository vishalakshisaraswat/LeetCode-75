class Solution {
public:
    int lengthOfLastWord(string s) {
        int p = s.size()-1;
        int c=0;

        while(p>=0 && s[p] == ' '){
            p--;
        }

        while(p>=0 && s[p] != ' '){
            c++;
            p--;
        }

        return c;
    }
};