#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    char  wd1[20];
    scanf("%s",&wd1);
    if(strrev(wd1)== wd1)
        printf("yes");
    else
        printf("no");

}
