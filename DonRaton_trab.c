#include <stdio.h>

int main(){
    int colelin, c1, c2; //declarei as variáveis

    scanf("%d",&colelin);//recebi o valor das variáveis
    
    int m1[colelin][colelin]; //defini que a matriz vair ter colelin de tamanho para coluna e linha
    
    for(c1=0;c1<colelin ;c1++){ //enquanto c1 for menor que a qquantidade de colunas e linhas esse for vai roda
        for(c2=0;c2<colelin;c2++){//enquanto c2 for menor que a quantidade de colunas e linhas vai rodar esse for
            scanf("%d", &m1[c1][c2] );// enquanto rodar o for, ele vai receber valores que vão ficar nas posições c1 e c2
        }
    }
    
    for(c1=0; c1<colelin; c1++){
        for(c2=0; c2<colelin; c2++){
            printf("%d ", m1[c1][c2]);//aqui ele vai printar os valores da matriz
        }
    printf("\n");//printa um espaço
        
    }
    
    int start,stop;// declara as variáveis para começar a analisar a questão da passagem nas cidades
    
    scanf("%d", &start);//scanfa a cidade que ele está
    scanf("%d", &stop);//scanfa a cidade que ele quer ir 
    
    while(start!=stop){//enquanto a cidade de início for diferente da cidade que ele quer chegar 
        for(c1 = 0; c1 < colelin; c1++){
            
          if(m1[start][c1] < cidadeAnterior && m1[start][c1] > 0){ //se a matriz começando na cidade inicio for menor que a cidadeanterior e matriz menor que zero
                
            }
                
            }
        }
        
    }
    
    //fazer alguma coisa que calcule o valor da distância de start e stop
    //indicar o caminho que ele fez
    //como calcular com todas as rotas e descobrir qual é a melhor??
    
    
    
     
    
    return 0;
}
