#include <stdio.h>
int areAnagrams(char word1[], char word2[]) {
    int i, j;
    int count1[26] = {0};
    int count2[26] = {0};
    for (i = 0; word1[i] != '\0'; i++) {
        if (word1[i] >= 'A' && word1[i] <= 'Z')
            count1[word1[i] - 'A']++;
        else if (word1[i] >= 'a' && word1[i] <= 'z')
            count1[word1[i] - 'a']++;
    }
    for (j = 0; word2[j] != '\0'; j++) {
        if (word2[j] >= 'A' && word2[j] <= 'Z')
            count2[word2[j] - 'A']++;
        else if (word2[j] >= 'a' && word2[j] <= 'z')
            count2[word2[j] - 'a']++;
    }
    for (i = 0; i < 26; i++) {
        if (count1[i] != count2[i])
            return 0; 
}
    return 1;  
}
int main() {
    char word1[100], word2[100];

    printf("Enter first word: ");
    scanf("%s", word1);

    printf("Enter second word: ");
    scanf("%s", word2);

    if (areAnagrams(word1, word2))
        printf("'%s' and '%s' are ANAGRAMS.\n", word1, word2);
    else
        printf("'%s' and '%s' are NOT anagrams.\n", word1, word2);

    return 0;
}

