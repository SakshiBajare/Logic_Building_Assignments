#include <stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkEven(int iNo) {
    // Check if the number is divisible by 2
    if (iNo % 2 == 0) {
        return TRUE;
    } else {
        return FALSE;
    }
}

int main() {
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if (bRet == TRUE) {
        printf("It is Even\n");
    } else {
        printf("It is Odd\n");
    }

    return 0;
}
