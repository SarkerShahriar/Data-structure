#include<stdio.h>
int main()
{
    int a[100],tem,i,j,n;
    printf("Enter the limit of array:");
    scanf("%d",&n);
    printf("\nEnter elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                tem=a[j];
                a[j]=a[j+1];
                a[j+1]=tem;
            }
        }
    }
    printf("\nyour updated arry is :");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
