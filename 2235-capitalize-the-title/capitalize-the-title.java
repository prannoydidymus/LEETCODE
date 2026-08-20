class Solution {
    public String capitalizeTitle(String title) {
        char[] arr = title.toCharArray();
        int n = arr.length;
        for(int i = 0;i<n;i++){
            int index = i;
        while(i < n && arr[i] != ' '){
            arr[i] = Character.toLowerCase(arr[i]);
            i++;
        }
        if(i - index > 2){
            arr[index] = Character.toUpperCase(arr[index]);
        }
        }
        return String.valueOf(arr);
}
}
