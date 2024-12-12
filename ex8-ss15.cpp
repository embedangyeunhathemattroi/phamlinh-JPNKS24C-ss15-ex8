#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char chucai[100] = "hello world";
    for(int i = 0; i < strlen(chucai); i++){
        if(islower(chucai[i])){
            chucai[i] = toupper(chucai[i]);
        }
        else if(isupper(chucai[i])){
            chucai[i] = tolower(chucai[i]);
        }
    }    
    printf("%s\n", chucai);
    return 0;
}
