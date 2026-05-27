/*#include <stdio.h>

int main() {

    int N;
    int A[20], B[20];

   
    scanf("%d", &N);

    for (int *p = A; p < A + N; p++) {
        scanf("%d", p);
    }

  
    for (int *p = B; p < B + N; p++) {
        scanf("%d", p);
    }

   
    for (int *p = A, *q = B + N - 1; 
         p < A + N; 
         p++, q--) {

        printf(" %d", *p + *q);
    }

    return 0;
}
*/
