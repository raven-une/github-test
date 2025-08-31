#include <stdio.h>
int fix(int , int );

int sub(int a , int b)
{
    printf("the multiply is %d\n",a*b);
    return 0;
}

int main()
{
    printf("This is a bug fix file\n");
    printf("the return value is %d\n",fix(4,5));
    sub(2,4);
    return 0;
}

int fix(int a , int b){
    return a + b;
}

