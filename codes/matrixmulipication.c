#include<stdio.h>
int main()
{
    int a[5][5],b[5][5],c[5][5],i,j,k,sum=0,m,n,o,p;
    printf("\nEnter the row and column of first matrix");
    scanf("%d %d",&m,&n);
    printf("\nEnter the row and column of second matrix");
    scanf("%d %d",&o,&p);
    if(n!=o)
    {
        printf("Matrix multiplication is not possible");
        printf("\nColumn of first matrix must be same as row of second matrix");
    }
    else
    {
        printf("\nEnter the First matrix->");
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
                scanf("%d",&a[i][j]);
        printf("\nEnter the Second matrix->");
        for(i=0; i<o; i++)
            for(j=0; j<p; j++)
                scanf("%d",&b[i][j]);
        printf("\nThe First matrix is\n");
        for(i=0; i<m; i++)
        {
            printf("\n");
            for(j=0; j<n; j++)
            {
                printf("%d\t",a[i][j]);
            }
        }
        printf("\nThe Second matrix is\n");
        for(i=0; i<o; i++)
        {
            printf("\n");
            for(j=0; j<p; j++)
            {
                printf("%d\t",b[i][j]);
            }
        } ///m1 m*n m2 o*p resultant matrix m*p
        for(i=0; i<m; i++)
            for(j=0; j<p; j++)
                c[i][j]=0;
        for(i=0; i<m; i++) ///i = 0
        {
            //row of first matrix
            for(j=0; j<p; j++) ///j = 0
            {
                //column of second matrix
                sum=0;
                for(k=0; k<n; k++) ///k = 0
                    sum=sum+a[i][k]*b[k][j];/// 0+
                c[i][j]=sum;
            }
        }
        printf("\nThe multiplication of two matrix is\n");
        for(i=0; i<m; i++)
        {
            printf("\n");
            for(j=0; j<p; j++)
            {
                printf("%d\t",c[i][j]);
            }
        }
    }
    return 0;
}
