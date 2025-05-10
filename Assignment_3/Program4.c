#include <stdio.h>
#include <ctype.h>

void DisplayConvert(char cValue) 
{
    if (islower(cValue))
     {
        printf("Converted character: %c\n", toupper(cValue));
    } else if (isupper(cValue))
     {
        printf("Converted character: %c\n", tolower(cValue));
    } else {
        printf("Input is not an alphabetic character.\n");
    }
}

int main() 
{
    char cValue;
    printf("Enter a character: ");

    scanf(" %c", &cValue); // Note the space before %c to consume any leading whitespace

    DisplayConvert(cValue);
    
    return 0;
}
