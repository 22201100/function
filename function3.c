#include<stdio.h>
int getmax(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
  //printf(" maximum value is: %d\n",getmax(5,10));
    //printf(" maximum value is: %d\n",getmax(15,10));
    //printf(" maximum value is: %d\n",getmax(20,10));
    //printf(" maximum value is: %d\n",getmax(50,10));
    int a,b;
    scanf("%d%d",&a,&b);
    printf(" maximum value is: %d\n",getmax(a,b));
}
