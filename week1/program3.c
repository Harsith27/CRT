#include <stdio.h>
#include <math.h>
int main(void)
{
    int n,flag=0,temp=0,max=0,sum=0,count=0;
    printf("Enter the no of elements:");
    scanf("%d", &n);
    int a[n],b[n];
    printf("Enter the array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         if(a[j+1]<a[j])
    //         {   
    //         }
    //         else
    //         {
    //             sum=j-i+1;
    //             if(sum>max)
    //             {
    //                 max=sum;
    //             }
    //         }
    //     }
    // }
    for(int i=0;i<n-1;i++)
    {
        if((a[i]>a[i+1])&&(flag==0))
        {
            flag==1;
            count=count+1;
        }
        else
        {
            flag==0;
        }
    }
    // printf("Original array:");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ",b[i]);
    // }
    printf("%d",count);
    return 0;
}