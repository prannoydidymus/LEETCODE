
class Solution {
    public int minOperations(String s) {
        int n = s.length();
        int count = 0;

        // Step 1: Count adjacent pairs that are out of order
        for (int i = 1; i < n; i++) {
            if (s.charAt(i) < s.charAt(i - 1)) {
                count++;
            }
        }

        // Step 2: Already sorted
        if (count == 0) {
            return 0;
        }

        // Step 3: Unsorted string of length 2
        if (n == 2) {
            return -1;
        }

        // Step 4: Find minimum and maximum characters
        char min = s.charAt(0);
        char max = s.charAt(0);

        for (int i = 1; i < n; i++) {
            if (s.charAt(i) < min) {
                min = s.charAt(i);
            }
            if (s.charAt(i) > max) {
                max = s.charAt(i);
            }
        }

        // Step 5: Minimum operations
        if (s.charAt(0) == min || s.charAt(n - 1) == max) {
            return 1;
        }

        for (int i = 1; i < n - 1; i++) {
            if (s.charAt(i) == min || s.charAt(i) == max) {
                return 2;
            }
        }

        return 3;
    }
}
