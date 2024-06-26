// Problem Link -> https://leetcode.com/problems/can-place-flowers/description/

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len = flowerbed.size();
        if(n == 0) return true;

        for(int i = 0; i < len; i++){
            if(flowerbed[i] == 0){
                bool checkLeftEmpty = (i == 0) || (flowerbed[i - 1] == 0);
                bool checkRightEmpty = (i == len - 1) || (flowerbed[i + 1] == 0);

                if(checkLeftEmpty && checkRightEmpty){
                    flowerbed[i] = 1;
                    n--;

                    if(n == 0) return true;
                }
            }
        }

        return false;
    }
};


// Time Complexity -> O(n)
// Space Complexity -> O(1)
