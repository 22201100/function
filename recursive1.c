#include<stdio.h>
void printNumbers(int start ,int end){
    if(start>end)
{
    return;//Base case:stop recursion when start>end
}
printf("%d",start);//print the current number '=
printNumbers(start+1,end);//recursive call for the next number
}
int main()
{
    int start = 1;
    int end =10;

    printf("Numbers from %d to %d:\n",start,end);
    printNumbers(start,end);
    return 0;

}
