class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int i = 0;
        while (i < flowerbed.size()) {
            if (flowerbed[i] == 0) {
                bool leftEmpty = (i == 0) || (flowerbed[i - 1] == 0);
                bool rightEmpty = (i == flowerbed.size() - 1) || (flowerbed[i + 1] == 0);
                if (leftEmpty && rightEmpty) {
                    flowerbed[i] = 1;
                    count++;
                    i += 2; // Skip the next plot
                } else {
                    i++; // Move to the next plot
                }
            } else {
                i += 2; // Skip the next plot if current is already occupied
            }
            if (count >= n) {
                return true;
            }
        }
        return count >= n;
    }
};
