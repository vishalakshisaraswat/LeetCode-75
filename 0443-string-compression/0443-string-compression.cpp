class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int index = 0; // Index to place the compressed characters
        int i = 0;     // Pointer to traverse the chars array
        
        while (i < n) {
            char currentChar = chars[i];
            int count = 0;
            
            // Count the number of occurrences of the current character
            while (i < n && chars[i] == currentChar) {
                i++;
                count++;
            }
            
            // Place the character in the array
            chars[index++] = currentChar;
            
            // If count is greater than 1, add the count to the array
            if (count > 1) {
                string countStr = to_string(count);
                for (char c : countStr) {
                    chars[index++] = c;
                }
            }
        }
        
        return index;
    }
};
