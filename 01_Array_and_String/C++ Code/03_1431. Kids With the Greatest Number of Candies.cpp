// Problem Link -> https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        int maxCandy = *max_element(candies.begin(), candies.end());

        for(int i = 0; i < candies.size(); i++){
            if(candies[i] + extraCandies >= maxCandy){
                res.push_back(true);
            } else {
                res.push_back(false);
            }
        }

        return res;
    }
};



// Time Complexity -> O(n)
// Space Complexity -> O(1)
