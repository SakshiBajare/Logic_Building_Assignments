#include <stdio.h>

void DisplayEvenFactors(int iNo) {
    int i;
    
    // Convert negative numbers to positive
    if(iNo < 0) {
        iNo = -iNo;
    }

    printf("Even factors of %d are: ", iNo);
    for(i = 1; i <= iNo; i++) {
        if(iNo % i == 0 && i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int iValue;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayEvenFactors(iValue);

    return 0;
}
