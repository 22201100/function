#include <stdio.h>

int printevennumbers(int n)
{
    printf("Even Numbers: ");
    int i;
    for(i=1; i<=n; i++)
    {

        printf("%d",2*i);
        if (i!=n)
            printf(",");
    }
}
int main()
{
    int n,x;
    printf("n = ");
    scanf("%d",&n);

    x=printevennumbers(n);

    return 0;
}























/*Problem 7: Write a C function that prints the first n even numbers. The function should take n as an input
and print the first n even numbers. 1
Input Output
n = 5 Even Numbers: 2, 4, 6, 8, 10*/
