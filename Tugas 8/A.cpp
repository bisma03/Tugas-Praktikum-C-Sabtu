#include <stdio.h>

int main() {
    int A[11];  
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};  
    int i = 0, j = 0;
    

    while (data[i] != 999 && j < 6) {  
        if (i % 2 == 0) {  
            A[j] = data[i];
            j++;
        }
        i++;
    }

    
    printf("Isi array A: ");
    for (int k = 0; k < j; k++) {
        printf("%d ", A[k]);
    }

    return 0;
}