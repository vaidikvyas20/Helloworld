#include <stdio.h>
#define MAX 50

char st[MAX];
int tos=-1;

void push(char val)
{
    if (tos == (MAX-1))
    {
        printf("stack overflow");
    }

    else
    {
        tos++;
        st[tos]=val;

    }
}

char pop(void)
{
    char val;

    if (tos==-1)
    {
        printf("stack underflow");
    }

    else
    {
        val=st[tos];
        tos--;
        return val;

    }
}
