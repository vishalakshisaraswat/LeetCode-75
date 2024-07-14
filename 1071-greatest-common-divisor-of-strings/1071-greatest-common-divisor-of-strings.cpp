class Solution {
public:
    // Function to find the greatest common divisor of two strings
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1) {
            return ""; // If the concatenated strings are not equal, there is no common divisor
        }
        int gcdLength = gcd(str1.length(), str2.length());
        return str1.substr(0, gcdLength);
    }

private:
    // Helper function to calculate the greatest common divisor of two integers
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};
