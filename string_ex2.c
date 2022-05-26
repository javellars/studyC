#include <stdio.h>
#include <string.h>

int main(){
    
    int p,q;
    char palindromo[52], palindromo2[52];
    
    fgets(palindromo,52,stdin);
    
    for(p=0; p<strlen(palindromo)-2;p++){
        if(palindromo[p]>=65 && palindromo[p]<=90){
            palindromo[p]=palindromo[p]+32;
        }
    }
    
    for(p=strlen(palindromo)-2, q=0; p>=0; p--, q++){
        palindromo2[strlen(palindromo2)+1]='\n';
        palindromo2[strlen(palindromo2)+2]='\0';
    
    /*palindromo2[strlen(palindromo2)+1] = ‘\n’
palindromo2[strlen(palindromo2)+2]= ‘\0’*/
    }
    
    if(strcmp(palindromo,palindromo2)== 0){
        printf("esta palavra e um palindromo\n");
    }
    else
        printf("esta palavra nao e um palindromo\n");
    
    
    return 0;
}