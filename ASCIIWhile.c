#include <stdio.h>

int main(){

    char recebe;
    scanf("%c", &recebe);
    
    while(recebe!= '#'){
        printf("o código ASCII é %d", recebe);
        break;
    }
   
   
    return 0;
}
