#include <stdio.h>

void bez_arg_bez_return()
{
    printf("Hello World! \n");
}

void arg_bez_return(int a, char b)
{
    printf("Hello World! \n");
}

int bez_arg_return()
{
    printf("Hello World! \n");
    return 1;
}

int arg_return(int a, int b)
{
    printf("Hello World! \n");
    return 1;
}

int main()
{
    bez_arg_bez_return();
    arg_bez_return(3, 5);
    bez_arg_return();
    arg_return(4, 6);
}
