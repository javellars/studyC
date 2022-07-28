#include <stdio.h>

int main()
{
    float notas[20],j;//aqui o vetor notas só dtermina a quantidade de espaços que podem ser usados
    int cont;
    for(cont=0;cont<20;cont++){//aqui eu defino que serão captadas 20 informações, pq mais que isso excede a quantidade de espaços
        scanf("%f", &notas[cont]);//aqui eu coleto os dados em suas respectivas posições
    }
    printf("digite a nota a ser encontrada:");
    scanf("%f", &j);//insere a nota j
    
    
cont=0;    
// ele faz uma busca linear
while((notas[cont]!=j)&& cont<20){//aqui ele vai processar as notas e rodar enquanto o conteudo da posição cont for diferente da nota digitada, e enqunto as posições estiverem em 20 
    cont++;
}//quando ele achar um igual ele vai sair do laço e fazer uma verificação
    if(cont<20){ //verifica se a casa que chegou pode mesmo existir no vetor
        printf("existe na posição %d\n", cont);

    }
    else{
        printf("não existe no vetor!!");

    }




    return 0;
}

