#include<stdio.h>
//convert a matrix to lower triangular one
int main()
{
    int i,j,n,a[10][10];

    printf("Size of Square Matrix (MAX 10): ");
    scanf("%d",&n);

    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            if(i<j){
                a[i][j]=0;
            }
            else
            continue; 
        }
    }

    printf("The converted lower triangular matrix is:\n");
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

return 0;
}