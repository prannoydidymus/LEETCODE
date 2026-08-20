class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if(len(strs) == 0):
            return ""
        a = strs[0]
        for i in range(1,len(strs)):
            while not strs[i].startswith(a):
                a  = a[:-1]
        return a

        