#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, exp, res=1;
    scanf(" %d %d",&num ,&exp);
    for(int i=0; i<exp;i++)
        res= res*num;
    printf("%d",res);
    return 0;
}
