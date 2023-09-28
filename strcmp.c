#include <stdio.h>
#include <string.h>

int main(){
    char test[100]="ab";
    char copee[100]="ab";
    int i = 0,diff=0;
    while(test[i]!='\0' && i<100){
        if(copee[i]!=test[i]){
            diff=test[i]-copee[i];
            break;
        }
        i++;
    }
    if(test[i]=='\0' && test[i]!=copee[i]){
        diff=0-copee[i];
    }
    int x = strcmp(test,copee);
    printf("%d",x);
    printf("\n%d",diff);
}