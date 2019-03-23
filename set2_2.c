#include <stdio.h>
 
void main()
{
    int num, temp, remainder, reverse = 0;
 
    scanf("%d", &num);
    /*  original number is stored at temp */
    temp = num;
    while (num > 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    
    if (temp == reverse)
        printf("yes");
    else
        printf("no");
}
