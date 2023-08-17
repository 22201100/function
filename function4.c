#include<stdio.h>
float getarea(float r)
{
    return 3.1416*r*r;
}
int main()
{
    printf("The area of circle: %f\n",getarea(5));
}

