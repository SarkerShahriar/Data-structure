#include<stdio.h>
int main()
{
    int a[]={15,7,3,14,25,9,12};
    int i,j,temp;
     for(i=1;i<7;i++)
     {
         printf("\nPross %d",i);
         temp=a[i];
         j=i;
         while((j>0)&&(temp<a[j-1]))
         {
             a[j]=a[j-1];
             j--;
         }
         a[j]=temp;
         int k;
         for(k=0;k<7;k++){
         printf("%d ",a[k]);
         }
     }
     printf("\n\nYour sorted array");
     for(i=0;i<7;i++)
     {
         printf("\t%d",a[i]);
     }
}
