class Solution {
public:
    int hIndex(vector<int>& citations) {
        int h;
        sort(citations.rbegin(), citations.rend());

        while(h<citations.size() && citations[h]>h)
            h++;
        return h;
    }
};