#include <stdio.h>

signed long long celc(signed long long number,signed long long count);
int main()
{
    signed long long number,count;
    printf("please enter starting number   ");
    scanf("%lli",&number);
    printf("please enter a limit you want to go to   ");
    scanf("%lli",&count);
    celc(number,count);
    return 0;
}

signed long long celc(signed long long number,signed long long count)
{
    if(number % 2 == 0)
    {
        number /= 2;
        printf("%lli\n",number);
    }
    else
    {
        number = (number * 3) + 1;
        printf("%lli\n",number);
    }
    count--;
    if(count > 0)
    {
        celc(number,count);
    }
    return 0;
}

