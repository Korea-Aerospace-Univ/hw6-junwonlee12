#include <stdio.h>

int main() {

    char str[100];

   
    scanf("%s", str);

    char maxChar;
    int maxCount = 0;

  
    for (char *p = str; *p != '\0'; p++) {

        int count = 0;

   
        for (char *q = str; *q != '\0'; q++) {

            if (*p == *q) {
                count++;
            }
        }

       
        if (count > maxCount) {
            maxCount = count;
            maxChar = *p;
        }
    }

  
    printf("%c %d\n", maxChar, maxCount);

    return 0;
}
