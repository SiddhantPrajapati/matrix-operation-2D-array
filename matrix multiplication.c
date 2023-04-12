//multiplication of matrix
#include<stdio.h>
int main()
{
    int p,q,r;
    int a[10][10], b[10][10], c[10][10];
    //you can take max no of row and column is 10.
    //take q same for both matrix otherwise error occure
    printf("Enter the No of Row and Column of First Matrix Respectively\n");
    scanf("%d%d",&p,&q);
    printf("first matrix\n");
    for(int i = 0; i < p ; i++)
    {
        for(int j = 0; j < q; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the No of Row and Column of First Matrix Respectively");
    scanf("%d%d",&q,&r);
    printf("second matrix\n");
    for(int i = 0; i < q ; i++)
    {
        for(int j = 0 ; j < r ; j++)
        {

            scanf("%d",&b[i][j]);
        }
    }
    printf("multiplication of matrix\n");
    for(int i = 0; i < p; i++)
    {
        for(int j = 0 ; j < r ; j++)
        {
            c[i][j]=0;
            for(int k = 0 ; k < q ; k++ )
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    for(int i = 0 ; i < p ; i++)
    {
        for(int j = 0 ; j < r ; j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;

}

