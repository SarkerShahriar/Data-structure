#include<stdio.h>
int main()
{
    int a[100],n,i,temp,ptr;
    printf("Enter Elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {

         ptr=0;
        while(ptr<=n-1-i){
            if(a[ptr]>a[ptr+1])
        {
            temp=a[ptr];
            a[ptr]=a[ptr+1];
            a[ptr+1]=temp;

        }
            ptr++;
    }
    }
    for(i=0;i<n;i++){
    printf("\n %d",a[i]);
}
}
