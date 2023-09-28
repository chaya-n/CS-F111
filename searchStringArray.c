#include <stdio.h>
#include <string.h>

int main(){
    char inDis[7][30] = {"chayan", "is","my", "name", "lite","lite","Chayan"};
    char searchDis[10]  = "My";

    for(int i = 0; i < 5; i++){
        char temp[30];
        strcpy(temp, inDis[i]);
        if(strcmp(temp,searchDis)==0){
            printf("Found\n");
            break;
        }
    }
}