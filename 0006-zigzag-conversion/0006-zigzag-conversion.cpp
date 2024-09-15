class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows <= 1 || numRows > s.size()-1) return s;
        vector<string> rows(numRows);
        int  currRow=0;
        bool goingDown = false;
        for(char c : s){
            rows[currRow]+=c;
            if(currRow == 0 || currRow == numRows-1)
                goingDown = !goingDown;
            currRow+= goingDown ? 1 : -1;
        }
        string result;
        for(auto row : rows){
            result += row; 
        }
        return result;
    }
};