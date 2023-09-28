#include <stdio.h>

int main(){
    int a[3][3] = {{2,31,2},{1,57,2},{7,9,8}};
    int b[3][3] = {{4,1,1},{9,1,4},{3,7,6}};
    int c[3][3]={0,0,0,0,0,0,0,0,0};
    int prodsum;

    for (int i = 0; i < 3; i++)
    { 
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\t%d",c[i][j]);
        }
        printf("\n");        
    }
}