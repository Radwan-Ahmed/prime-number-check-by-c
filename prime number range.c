#include<stdio.h>
int main()
{
    int check,i,j,n,x,y;
    printf("Please put prime numbers Range :\n\n");
    printf("Enter First Number of Range :\n");
    scanf("%d",&x);
    printf("Enter Last Number of Range :\n");
    scanf("%d",&y);
    printf("Prime Numbers are in Range :\n");
    for(j=x;j<=y;j++)
    {
        n=j;
        check=0;
        for(i=2;i<j;i++)
        {
            if(n%i==0)
                check =1 ;
        }
        if(check==0)
            printf("%d\n",n);
    }
    return 0;
}

