class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l1= t.size();
        int l2= s.size();
        int p=0;
        for(int i=0; i<l1; i++)
            if(t[i] == s[p])
                p++;
        if(p == l2)
            return true;
        return false;
    }
};