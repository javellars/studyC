#include <stdio.h>
#include <string.h>//biblioteca para string

int main(){
    int q;
    char qualquer[82]; //declara a variavel qualquer e fala que ela tem o valor de 80 máximo, poe 82 pq ele vai armazenar dois lugares a mais para o null e para o \n
    fgets(qualquer,80,stdin);// só o fgets pega \n, por isso tem que declarar ali em cima. stdin é da biblioteca.
    
    for(q=strlen(qualquer)-2;q>=0;q--){ // esse for começa na última posição do tamanho da variável digitada, menos 2, por cauda do \n e do null. Ela vai em sentido contratiro.
        printf("%c", qualquer[q]);//aqui vai imprimir o caractere na posição q da variável qualquer.
        
    }
    return 0;
}