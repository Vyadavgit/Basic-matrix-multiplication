// Matrix multiplication technique 4by4 matrices

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A[4][4];
    A[0][0] = 1;
    A[0][1] = 1;
    A[0][2] = 1;
    A[0][3] = -1;
    
    A[1][0] = 1;
    A[1][1] = 1;
    A[1][2] = -1;
    A[1][3] = 1;
    
    A[2][0] = 1;
    A[2][1] = -1;
    A[2][2] = 1;
    A[2][3] = 1;
    
    A[3][0] = -1;
    A[3][1] = 1;
    A[3][2] = 1;
    A[3][3] = 1;
    
    double B[4][4];
    B[0][0] = 0.25;
    B[0][1] = 0.25;
    B[0][2] = 0.25;
    B[0][3] = -0.25;
    
    B[1][0] = 0.25;
    B[1][1] = 0.25;
    B[1][2] = -0.25;
    B[1][3] = 0.25;
    
    B[2][0] = 0.25;
    B[2][1] = -0.25;
    B[2][2] = 0.25;
    B[2][3] = 0.25;
    
    B[3][0] = -0.25;
    B[3][1] = 0.25;
    B[3][2] = 0.25;
    B[3][3] = 0.25;
    
    //print A
    printf("A: ");
    for(int r=0; r<4; r++){
        printf("\n");
        for(int c=0; c<4; c++){
            printf("%.2f ",A[r][c]);
        }
    }
    
    //print B
    printf("\n\nB: ");
    for(int r=0; r<4; r++){
        printf("\n");
        for(int c=0; c<4; c++){
            printf("%.2f ",B[r][c]);
        }
    }
    
    // matrix multiplication
    double Transform[4][4];
    double temp = 0;
    for(int rowA=0; rowA<4; rowA++){
        for(int colB=0; colB<4; colB++){
            for(int colA=0; colA<4; colA++){
                    temp = temp + A[rowA][colA]*B[colA][colB];
            }
            Transform[rowA][colB] = temp;
            temp=0;
        }
    }
    
    //Matrix multiplication
    printf("\n\nMatrix multiplication A*B: ");
    for(int r=0; r<4; r++){
        printf("\n");
        for(int c=0; c<4; c++){
            printf("%.2f ",Transform[r][c]);
        }
    }

    return 0;
}