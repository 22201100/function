#include <stdio.h>

int getsumofdigits(int n){
    int sum=0;
while(n>0){
        int a=n%10;
        sum=sum+a;
        n=n/10;
    }

    return sum;
}
int main() {
    int n;
    printf("n = ");
    scanf("%d",&n);
int b=getsumofdigits(n);
    printf("Sum = %d",b);

    return 0;
}




































/*Problem 4: Write a C function that calculates the sum of digits of a given positive integer n. The function
should take n as an input and return the sum of its digits. 2
Input Output
n = 12345 Sum = 15*/
