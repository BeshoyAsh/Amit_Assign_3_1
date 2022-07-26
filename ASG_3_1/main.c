#include <stdio.h>
#include <stdlib.h>
void swap_numbers(int,int);
int main()
{
    int a,b;
    printf("Please enter your First number:");
    scanf("%d",&a);
    printf("Please enter your second number:");
    scanf("%d",&b);
    swap_numbers(a,b);

    return 0;
}

void swap_numbers (int x,int y)
{
    printf("Before swaping \n x=%d y=%d",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("\nAfter swaping \n x=%d y=%d",x,y);
}

