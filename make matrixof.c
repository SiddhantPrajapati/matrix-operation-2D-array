//make matrix of 3*3
#include<stdio.h>
int main()
{
    int a[2][2],i,j;
    for(i=0;i<3;i++)
    {
        printf("row %d \n",i+1);
        for(j=0;j<3;j++)
        {
            printf("\t");
            scanf("%d",&a[i][j]);

        }

    }
    return 0;
}
