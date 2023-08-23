#include <stdio.h>
int getprime(int n) {
    int i,x=0;
    for (i=1;i<=n;i++) {
        if (n%i==0) {
            x++;
        }
    }
    if(x==2){
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int r,s;
    printf("n = ");
    scanf("%d",&r);
    for(int i=1;i<=r;i++)
    r =getprime(r);
    if (s==1) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }
    return 0;
}




















/*Problem 2: Write a C function that checks if a given positive integer is a prime number. The function
should take an integer as input and return whether it is prime or not.
Input Output
n = 17 Prime*/
