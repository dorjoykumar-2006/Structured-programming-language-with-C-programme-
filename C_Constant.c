#include<stdio.h>
int main()
{
    const int myNum=15; //this value cannot be updated during runtime
    //myNum=20; //this will give an error

    printf("Constant value is: %d\n", myNum);

    return 0;
}