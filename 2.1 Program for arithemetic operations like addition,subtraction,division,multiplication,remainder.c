#include <stdio.h>
void main()
{
    int a,b,sum,sub,div,mult,r;
    printf("Enter the  First Number :- ");
    scanf("%d",&a);
    printf("Enter the  Second Number :- ");
    scanf("%d",&b);
    sum = a+b;
    sub = a-b;
    div = a/b;
    mult = a*b;
    r = a%b;
    printf("\nThe Sum is : %d ",sum);
    printf("\nThe Subtraction is : %d ",sub);
    printf("\nThe Division is : %d ",div);
    printf("\nThe Multiplication is : %d ",mult);
    printf("\nThe Remainder is : %d ",r);
}