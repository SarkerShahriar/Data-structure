#include<stdio.h>
int main()
{
    int a[100],n,i,s,m;
    printf("Enter array limit:");
    scanf("%d",&n);
    printf("\n Enter elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nEnter element u want to search");
    scanf("%d",&s);
    int min=0,max=n-1;
    m=(min+max)/2;
    while(min<=max)
    {
        if(a[m]<s){
            min=m+1;
            m=(min+max)/2;
        }
        else if(a[m]==s){
            printf("\n %d dounr in %d",s,m);
            break;
        }
    }
    if(min>max){
        printf("\n\nElement not found");
    }
}
