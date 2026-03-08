int detectCapitalUse(char* word) {
    int n = strlen(word);

    int allUpper = 1;
    for (int i = 0; i < n; i++) {
        if (!isupper(word[i])) {
            allUpper = 0;
            break;
        }
    }
    if (allUpper) return true;

    int allLower = 1;
    for (int i = 0; i < n; i++) {
        if (!islower(word[i])) {
            allLower = 0;
            break;
        }
    }
    if (allLower) return 1;

    if (isupper(word[0])) {
        int restLower = 1;
        for (int i = 1; i < n; i++) {
            if (!islower(word[i])) {
                restLower = 0;
                break;
            }
        }
        if (restLower) return true;
    }
    return 0;
}