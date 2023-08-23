#include <stdio.h>

int getareaoftriangle(int x, int y) {
    return 0.5*x*y;
}

int main() {
    int x,y;
    printf("base = ");
    scanf("%d",&x);
    printf("Height = ");
    scanf("%d", &y);

    int z=getareaoftriangle(x,y);
    printf("Area = %d",z);

    return 0;
}







































/*Problem 6: Write a C function that calculates the area of a triangle given its base and height. The
function should take the base and height as inputs and return the area. 1
Input Output
base = 10, Height = 8 Area = 40*/
