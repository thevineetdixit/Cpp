#include <stdio.h>
#include <string.h>

string  countNoOfOccurence(char *str, char letter) {
    int cnt = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == letter) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int n = 100;
    char str[n];
    printf("Input String: ");
    gets(str);

    char letter;
    printf("Input letter to be searched: ");
    letter = getchar();
    
    int ans = countNoOfOccurence(str, letter);
    printf("The value '%c' has occurred %d times in the string.\n", letter, ans);
    
    return 0;
}
