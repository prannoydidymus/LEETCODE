class Solution:
    def compress(self, chars: List[str]) -> int:
        n = len(chars)
        count = 0
        index = 0
        for i in range(n):
            count += 1
            if i + 1 == n or chars[i] != chars[i + 1]:
                chars[index] = chars[i]
                index += 1
                if count > 1:
                    for ch in str(count):
                        chars[index] = ch
                        index += 1
                count = 0
        return index
