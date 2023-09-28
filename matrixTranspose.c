#include <stdio.h>

int main(){
    int a[3][4] = {{2,31,2,6},{1,57,2,8},{7,9,8,1}};
    int b[4][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            b[j][i] = a[i][j];
        }
        
    }
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("  %d",a[i][j]);
        }
        // printf("\n");        
    }
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("  %d",b[i][j]);
        }
        // printf("\n");        
    }
    
}