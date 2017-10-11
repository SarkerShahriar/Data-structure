#include<stdio.h>
#include<windows.h>

int main()
{
    system("COLOR 3f");
    int a[20],i,n;
    printf("how many elements dou u want:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter elements:");
        scanf("%d",&a[i]);
    }
   
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    int b,position;
    printf("\nenter new element:");
    scanf("%d",&b);
    printf("\nenter the position:");
    scanf("%d",&position);
    for(i=n;i>=position;i--){
        a[i]=a[i-1];
    }
    a[position-1]=b;
    n++;
    printf("\nadded new elements are:");
    for(i=0;i<n+1;i++){
        printf("%d\n",a[i]);
    }

    return 0;
}
