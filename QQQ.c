#include <stdio.h>
int main()

{

        printf("Sum Calculator\n");
        printf("==============\n");
        printf("Enter the numbers you would like to calculate the sum of.\n");
        printf("When done, type '0' to output the results and quit.\n");

   float s,n;

   do  

   {                                    
        printf("Enter:");
        scanf("%f",&n);
        s+=n;      
   }
  while (num!=0);


   printf("The sum of the numbers is %.6f\n",s);

return 0;
}
