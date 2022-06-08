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
    
    // for(c1=0; c1<colelin; c1++){
    //     for(c2=0; c2<colelin; c2++){
    //         printf("%d ", m1[c1][c2]);//aqui ele vai printar os valores da matriz
    //     }
    // printf("\n");//printa um espaço
        
    // }
    
    int start,stop,cidadeAnterior=0,dist=0;// declara as variáveis para começar a analisar a questão da passagem nas cidades
    int cidadetemp;//variável temporária pra guardar a cidade que ele planeja ir 
    int passadas[colelin],p;
        for(p=0;p<colelin ;p++){//aqui a gente define que os elementos da passadas vai começar com o valor 0
            passadas[p]=0;
        }

    
    
    scanf("%d", &start);//scanfa a cidade que ele está
    passadas[start]=1;//conta a primeira vez
    scanf("%d", &stop);//scanfa a cidade que ele quer ir 
    
    int passeata[colelin],quantpasseata=0;//passadas organizadas
        passeata[quantpasseata]=start;//aqui ele conta o que começou e organiza os baragudegs pra exibir no final por one ele passou
        quantpasseata++;
    
    while(start!=stop){//enquanto a cidade de início for diferente da cidade que ele quer chegar 
    
        for(c1 = 0; c1 < colelin; c1++){//aqui ele vai rodar pra cada cidade
            
            if(((cidadeAnterior > m1[start][c1] && m1[start][c1] > 0 )|| cidadeAnterior == 0) && passadas[c1]==0){ //se o valor de start for menor que cidadeAnterior e start for maior que zero
                cidadeAnterior = m1[start][c1];
                cidadetemp = c1;
            }
        }
        start=cidadetemp;
        passadas[start]=1;
        passeata[quantpasseata]=start;
        quantpasseata++;
        dist=dist+cidadeAnterior;
        cidadeAnterior=0;
    }
    
        
        printf("Distancia total entre %d e %d: %d\n",passeata[0],stop,dist);
            
            printf("Caminho: ");
        for(c2=0;c2<quantpasseata;c2++){    
            printf("%d",passeata[c2]);
            if(c2==quantpasseata-1){}
            else{
                printf("->");
            }
        }
    printf("\n");
    
    
    
    //fazer alguma coisa que calcule o valor da distância de start e stop
    //indicar o caminho que ele fez
    //como calcular com todas as rotas e descobrir qual é a melhor??
    
    
    
     
    
    return 0;
}
