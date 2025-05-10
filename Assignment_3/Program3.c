



#include <stdio.h>

// Function to display even factors of a number
void DisplayEvenFactor(int iNo) {
    int i;
    if (iNo <= 0)
     {
        iNo = -iNo; // Convert negative numbers to positive
    }

    printf("Even factors of %d are: ", iNo);
    for (i = 1; i <= iNo; i++)
     {
        if ((iNo % i == 0) && (i % 2 == 0)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
 {
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);
    DisplayEvenFactor(iValue);
    return 0;
}
