# Problem Link -> https://leetcode.com/problems/string-compression/description/

class Solution:
    def compress(self, chars: List[str]) -> int:
        length = len(chars)
        read_index = 0
        write_index = 0

        while read_index < length:
            curr_char = chars[read_index]
            char_count = 0

            while read_index < length and chars[read_index] == curr_char:
                char_count += 1
                read_index += 1
            
            chars[write_index] = curr_char
            write_index += 1

            if char_count > 1:
                count_str = str(char_count)
                for ch in count_str:
                    chars[write_index] = ch
                    write_index += 1
        
        return write_index



# Time Complexity -> O(n)
# Space Complexity -> O(1)
