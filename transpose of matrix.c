//c program to find transpose of a matrix
#include<stdio.h>
int main()
{
    int m,n,c,d,matrix[10][10],transpose[10][10];
    printf("enter the number of rows and column of a matrix and column of a matrix");
    scanf("%d%d",&m,&n);
    printf("enter element of the matrix\n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            scanf("%d",&matrix[c][d]);
        }
    }
    printf("\n matrix:\n");
    for(c=0;c<m;c++)
    {
        printf("\n");
        for(d=0;d<n;d++)
        {
            printf("\t%d",matrix[c][d]);
        }
    }
    for(c=0;c<m;c++)
    {
        printf("\n");
        for(d=0;d<n;d++)
        {
            transpose[d][c]=matrix[c][d];
        }
    }
    printf("\n\n transpose of the matrix:\n");
    for(c=0;c<n;c++)
    {
        printf("\n");
        for(d=0;d<m;d++)
        {
            printf("\t%d",transpose[c][d]);
        }
    }
    return 0;
}
