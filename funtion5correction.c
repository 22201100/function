#include<stdio.h>
float getarea(float r)
{
    return  3.1416*r*r; ;
}
void getvolume( float r)
{
    float volume;
    printf ("%f", (4*r*getarea(r))/3);
}

int main()
{
    printf("The area of circle: %f\n",getarea(2));
    getvolume(2);
}

