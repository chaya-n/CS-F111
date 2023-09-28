#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char text[100];
    char array[5][15];
    printf("Enter a sentence \n");
    gets(text);
    int i=0,k=0;
    char temp[15]="";
    char empty[5]="";
    while (text[i]!='\0')
    {
        if (!isspace(text[i]))
        {
            int j = 0;
            while(!isspace(text[i]) && text[i] != '\0'){
            temp[j]=text[i];
            i++;
            j++;
            }
            temp[j] = '\0';
            strcpy(array[k],temp);
            k++;
        }
        strncpy(temp,empty,1);
        i++;
    }
    int size = k;
    for (int l = 0; l < k; l++)
    {
        printf("\n%s",array[l]);
    }
    
    for(int i1=0; i1<size;i1++){

    }
    
    return 0;
}