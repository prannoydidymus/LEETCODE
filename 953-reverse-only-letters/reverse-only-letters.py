class Solution:
    def reverseOnlyLetters(self, s: str) -> str:
        str = list(s)
        start = 0
        end = len(str)-1
        while start < end:
            if str[start].isalpha():
                if str[end].isalpha():
                    str[end],str[start] = str[start],str[end]
                    start += 1
                    end -= 1
                else:
                    end -= 1
            else:
                start += 1
        return ''.join(str)