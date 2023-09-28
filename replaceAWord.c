#include <stdio.h>
#include <string.h>

int main(){
    char text[100] = "Dude this sentences has a lot of words. You can try to replace words from this sentence";
    printf("%s\n",text);
    printf("Enter a word to replace : ");
    char replaceDis[100];
    gets(replaceDis);
    printf("\nEnter the replacing word : ");
    char withDis[100];
    gets(withDis);

    int i = 0;
    while (text[i]!='\0')
    {
        if(text[i]==replaceDis[0]){
            int j = 1;
            int fullMatch = 0;
            while (text[i+j]==replaceDis[j])
            {
                if(replaceDis[j+1]=='\0'){
                    fullMatch=1;
                    break;
                }
                j++;
            }
            if(fullMatch){
                while(j>=0){
                    text[i+j]=withDis[j];
                    j--;
                }
            }
            
        }
        i++;
    }
    printf("\n");
    puts(text);    
}