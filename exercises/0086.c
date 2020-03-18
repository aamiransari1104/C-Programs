#include<stdio.h>

int main()
{
    int a[10][10] = {{1,0,0},{7,4,0},{3,5,6}};
    int i,j,k,m=3,n=3;

    //Input
    /*printf("Enter number of rows and columns of matrix :\n");
    scanf("%d%d", &m,&n);

    printf("Enter elements of matrix :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }*/
//===============================================================================
    /*For identity matrix
    int i_1=0,i_2=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                if(a[i][j]==1)
                {
                    i_1++;
                }
            }
            else
            {
                if(a[i][j]==0)
                    i_2++;
            }
        }
    }
    if(i_1 == m && i_2 == (m*m-m))
    {
        printf("The given matrix is Unit matrix!!");
    }
    else
    {
        printf("The given matrix is not unit matrix!!");
    }*/
//===============================================================================
    /* For unit matrix
    int u=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==1)
            {
                u++;
            }
        }
    }
    if(u==m*n)
    {
        printf("\n\nEntered matrix is an unit matrix!!");
    }
    else
    {
        printf("Entered matrix is not an unit matrix!!");
    }*/
//===============================================================================

    /*For Symmetric matrix
    int s=0;

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==a[j][i])
            {
                s++;
            }

        }
    }
    if(s==m*n)
    {
        printf("\n\nEntered matrix is Symmetric!!");
    }
    else
    {
        printf("\n\nEntered matrix is not Symmetric!!");
    }*/
//===============================================================================

    // For Lower triangular matrix
    int lt=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i<j)
            {
                if(a[i][j]!=0)
                {
                    lt++;
                }
            }
        }
    }
    if(lt>0)
    {
        printf("\n\nEntered matrix is not a Lower triangular!!");
    }
    else
    {
        printf("\n\nEntered matrix is a Lower triangular!");
    }
//===============================================================================
    //for scalar matrix

}









