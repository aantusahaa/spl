#include<stdio.h>
int main()
{
    int i,j,a[2][2]={{1,2},{4,1}},b[2][2],sym=0;

    for (i=0;i<2;i++){
        for (j=0;j<2;j++){
            b[i][j]=a[j][i];
        }
    }
    
    for (i=0;i<2;i++){
        for (j=0;j<2;j++){
            if(a[i][j]==b[i][j]){
                sym++;
            }
            else
            continue;
        }
    }

    printf("The Given Matrix is:\n");
        for (i=0;i<2;i++){
            for (j=0;j<2;j++){
                printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("The Transposed Matrix is:\n");
        for (i=0;i<2;i++){
            for (j=0;j<2;j++){
                printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    if(sym==4)
        printf("Matrix is Symmetric");
    else
        printf("Matrix is not Symmetric");

    return 0;
}