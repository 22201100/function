#include<stdio.h>
int factorial(n)
{
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}

int main()
{
    printf("%d",factorial(10));
    return 0;
}
