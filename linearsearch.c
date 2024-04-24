#include<stdio.h>
int main()
{
    int a[100],n,key,i;
    printf("how many element: ");
    scanf("%d",&n);
    printf("enter array element: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the search key: ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            break;
        }
    }
    if(i==n)
     {
        printf("search failure ");
     }
     else{
        printf("search successful and found at location %d",i+1);
     }
     return 0;
}