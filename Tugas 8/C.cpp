#include <stdio.h>

int main() {
    int A[11];  
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};  
    int i = 0;  
    int j = 0; 

    while (data[j] != 999 && i < 11) {
        if (data[j] > 9) {
            A[i] = data[j];  
            i++;  
        }
        j++; 
    }

    printf("Data yang telah dimasukkan ke dalam array A:\n");
    for (int k = 0; k < i; k++) {
        printf("%d ", A[k]);
    }

    return 0;
}