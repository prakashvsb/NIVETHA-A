#include <stdio.h>
int main()
{
    int n, i, s = 0;
    
    printf("Enter a positive int: ");
    scanf("%d",&n);

    for(i=1; i <= n; ++i)
    {
        s += i;
    }

    printf("s = %d",s);

    return 0;
}
