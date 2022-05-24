#include <stdio.h>

/*#define NUMC 20
#define NUML 20
OQ É ESSA BUDEGA?
*/

int main(){
  //  int m1[N][N] /*corresponde à primeira matriz a receber*/, m2[N][N] /*corresponde à seguda matriz a receber*/, m3[N][N]/*corresponde à terceira matriz, que vai ser gerada*/;
    //DUVIDA: pq tem que colocar o N? ele indica a posição?
    int nc, nl, l, c; 
    
    
    scanf("%d %d",  &nc,&nl);// aqui entra o valor da linha e da coluna
    
    int m1[nc][nl];//define que a matriz vai ser formada pela coluna com o tamanho inserido em nc e pelas linhas digitadas em nl
    
    for (l=0; l < nl; l++){ //enquando l for menor que o nl digitado pelo usuário o laço continua rodando
        for (c=0; c < nc; c++){ //enquanto c for menor que o numero de colunas digitado antes
            scanf("%d",&m1[l][c]); //recebe os valores da matriz
        }    
    }        
    
    for (l=0; l < nl; l++){//percorre linhas 
        for (c=0; c < nc; c++){//percorre colunas, 
            printf("%d ",m1[c][l]); //exibe a matriz final
            printf("\n");
        }    
}

// em for se tiver só um valor não é necessário usar as {}
//os dois for tem a mesma estrutura, os comentarios valem tanto para um quanto para outro

    return 0;
}