#include <stdio.h>
void main()
{
    int num;
    scanf("%d", &num);
    int a[10], n = 0;
    while (num > 0)
    {
        a[n] = num % 10;
        num = num / 10;
        n++;
    }
    int m=n,sum=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
                sum=sum+a[j];
        }
        m--;
    }
    printf("%d ",sum);
}