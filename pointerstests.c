#include<stdio.h>
#include<stdlib.h>
#define r 3
#define c 3
void matrixInput(int mat[r][c]);
void matrixPrint(int mat[r][c]);
void matrixAdd(int mat1[r][c],int mat2[r][c],int res[r][c]);
int main()
{
    int mat1[r][c],mat2[r][c],res1[r][c],res2[r][c];
    printf("Enter elements in first matrix of size %dx%d\n",r,c);
    matrixInput(mat1);
    printf("Enter the elements in second matrix of size %dx%d\n",r,c);
    matrixInput(mat2);
    matrixAdd(mat1, mat2, res);
    printf("\nSum of first and second matrix :\n");
    matrixPrint(res);
    
    return 0;
}
void matrixInput(int mat[r][c]){
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&mat[i][j]);
        } 
    }
}
void matrixPrint(int mat[r][c]){
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",*(*(mat+i)+j));
        }
        printf("\n");        
    }
}
void matrixAdd(int mat1[r][c],int mat2[r][c],int res[r][c]){
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            *(*(res+i)+j)=*(*(mat1+i)+j)+*(*(mat2+i)+j);
        }
    }
}
void matrixMultiply(int mat1[][c],int mat2[][c],int res[][c]){
    int row,col,i;
    int sum;
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            sum=0;
            for(i=0;i<c;i++)
                sum+=(*(*mat1+row)+i)*(*(*(mat2+i)+col));
        *(*(res+row)+col)=sum;
        }
    }
}
//*(array+i)=array[i]
//array+i=&array[i]