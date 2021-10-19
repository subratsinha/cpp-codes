#include<stdio.h>

int main()
{
    int a[40],b[40],c[40],i,j,k,count,n;
    printf("enter bit size :");
    scanf("%d",&n);
    printf("enter bit-");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    i=0;
    count=1;
    j=0;
    while(i<n)
    {
        if(a[i]==1)
        {
            b[j]=a[i];
            for(k=i+1; a[k]==1 && k<n && count<5; k++)
            {
                j++;
                b[j]=a[k];
                count++;
                if(count==5)
                {
                    j++;
                    b[j]=0;
                }
                i=k;
            }
        }
        else
        {
            b[j]=a[i];
        }
        i++;
        j++;
    }
    printf("bit stuffing-");
    for(i=0; i<j; i++)
        printf("%d",b[i]);
    printf("\tbit destuffing-\t");
    for(i=0; i<j-1; i++)
        printf("%d",c[i]);
    return 0;
}
