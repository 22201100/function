#include <stdio.h>

int getfibonacci(int n) {
    int previous=0,present=1,next;

    printf("The Fibonacci Series: ", n);
    int i;
    for (i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next=previous+present;
            previous=present;
            present=next;
        }
        printf("%d ",next);
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter the n = ");
    scanf("%d",&n);
    getfibonacci(n);
    return 0;
}
























/*Problem 3: Write a C function to generate the Fibonacci series up to a given term n. The function should
take n as an input and print the Fibonacci series. 1
Input Output
Enter the n = 6 The Fibonacci Series: 0 1 1 2 3 5*/
