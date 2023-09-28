#include <stdio.h>
#include <string.h>

int main(){
    printf("Started\n");
    char sortDis[100]  = "Teesha I wish we had kissed, I wanted to kiss you australian";
    int i=0;
    while(sortDis[i]!='\0'){
        int j = 0;
        while(sortDis[j+1]!='\0'){
            if(sortDis[j]<sortDis[j+1]){
                char temp = sortDis[j];
                sortDis[j]=sortDis[j+1];
                sortDis[j+1]=temp;
            }
            j++;
        }
        i++;
    }
    printf("Stopped\n");
    puts(sortDis);
}