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