#include <stdio.h>
#include <math.h>
int main(void)
{
    int num;
    scanf("%d", &num);
    int a[10], n = 1;
    while (num > 0)
    {
        a[n] = num % 10;
        num = num / 10;
        n++;
    }
    a[0]=0;
    int sum=0,value=0;
    for (int i = 0; i < n-1; i++)
    {
        sum=sum+pow(a[i+1],a[i]);
    }
    printf("The value is %d",sum);
    return 0;
}