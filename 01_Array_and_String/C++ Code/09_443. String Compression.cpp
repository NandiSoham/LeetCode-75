// Problem Link -> https://leetcode.com/problems/string-compression/description/

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int readIndex = 0, writeIndex = 0;

        while(readIndex < n){
            char currChar = chars[readIndex];
            int charCount = 0;

            while(readIndex < n && chars[readIndex] == currChar){
                charCount++;
                readIndex++;
            }

            chars[writeIndex] = currChar;
            writeIndex++;

            if(charCount > 1){
                string countStr = to_string(charCount);
                for(char &ch : countStr){
                    chars[writeIndex] = ch;
                    writeIndex++;
                }
            }
        }

        return writeIndex;
    }
};



// Time Complexity -> O(n)
// Space Complexity -> O(1)
