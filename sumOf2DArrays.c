#include <stdio.h>

int main(){
    int a[3][4] = {{2,31,2,6},{1,57,2,8},{7,9,8,1}};
    int b[3][4] = {{4,1,1,1},{9,1,4,6},{3,7,6,9}};
    int c[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("\t%d",c[i][j]);
        }
        printf("\n");        
    }
    
}