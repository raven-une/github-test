#include <stdio.h>
int fix(int , int );
int sub(int a , int b);

int main()
{
    printf("This is a bug fix file\n");
    printf("the return value is %d\n",fix(4,5));
    printf("the sub is %d",sub(7,4));
    return 0;
}

int fix(int a , int b){
    return a + b;
}

int sub(int a , int b)
{
    return a - b;
}