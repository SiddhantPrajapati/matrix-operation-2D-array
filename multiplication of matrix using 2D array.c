//make matrix
#include<stdio.h>
void main()
{
    struct multi
    {
    int a[3][3];
    }s[2];
    int k,i,j;

    {
    for(k=0;k<2;k++)
    {



    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter the array element");
            scanf("%d",s[k].a);
        }
    }
    printf("%dst matrix\n",k);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",s[k].a);
        }
        printf("\n\n");
    }
    }
    }
}

