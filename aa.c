#include <stdio.h>
int main()
{
    int num, originalNum, remainder, result = 0;

    printf("Enter a 3 digit integer: ");
    scanf("%d", &number);

    originalNum = num;

    while (originalNum != 0)
    {
        remainder = originalNum%10;
        result += remainder*remainder*remainder;
        originalNum /= 10;
    }

    if(result == num)
        printf("%d is an Armstrong num.",num);
    else
        printf("%d is not an Armstrong num.",num);

    return 0;
}
