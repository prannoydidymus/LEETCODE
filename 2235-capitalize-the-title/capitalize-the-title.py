class Solution:
    def capitalizeTitle(self, title: str) -> str:
        arr = list(title)
        n = len(arr)
        i = 0
        while i< n:
            index = i
            while i<n and arr[i] != ' ':
                arr[i] = arr[i].lower()
                i += 1
            if i - index >2:
                arr[index] = arr[index].upper()
            i+=1
        return ''.join(arr)