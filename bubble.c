#include<stdio.h>
int main()
{
    int i,j,n,temp;
    printf("enter the no of element: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the element: \n");
    for(i=0;i<n;i++)
    {
      
        scanf("%d",&a[i]);
    }
  
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("the elements after sorting are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

}