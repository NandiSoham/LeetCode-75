// Problem Link -> https://leetcode.com/problems/move-zeroes/description/

// ------------------------------- Approach - 1 ---------------------------

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> tempArr;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                tempArr.push_back(nums[i]);
            }
        }

        for(int i = 0; i < tempArr.size(); i++){
            nums[i] = tempArr[i];
        }

        for(int i = tempArr.size(); i < nums.size(); i++){
            nums[i] = 0;
        }
    }
};



// Time Complexity -> O(n)
// Space Complexity -> O(n)

// ------------------------------------------------------------------------

// ------------------------------- Approach - 2 ---------------------------

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = -1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                j = i;
                break;
            }
        }

        if(j == -1) return;

        for(int i = j + 1; i < nums.size(); i++){
            if(nums[i] != 0){
                swap(nums[i], nums[j]);
                j++;
            }
        }

    }
};



// Time Complexity -> O(n)
// Space Complexity -> O(1)

// ------------------------------------------------------------------------
