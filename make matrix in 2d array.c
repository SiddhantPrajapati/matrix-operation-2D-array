//make matrix
#include<stdio.h>
void main()
{
    int a[3][3],i,j;//i for row and j for column
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter the array element");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n\n");
    }
}
