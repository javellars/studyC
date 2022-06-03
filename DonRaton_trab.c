#include <stdio.h>

int main(){
    int colelin, c1, c2;

    scanf("%d",&colelin);
    
    int m1[colelin][colelin];
    
    for(c1=0;c1<colelin ;c1++){
        for(c2=0;c2<colelin;c2++){
            scanf("%d", &m1[c1][c2] );
        }
    }
    
    for(c1=0; c1<colelin; c1++){
        for(c2=0; c2<colelin; c2++){
            printf("%d ", m1[c1][c2]);
        }
    printf("\n");
        
    }
    
    int start,stop;
    
    scanf("%d", &start);
    scanf("%d", &stop);
    
    while(start!=stop){
        for(c1 = 0; c1 < colelin; c1++){
            if(m1[start][c1] < cidadeAnterior && m1[start][c1] > 0){
                
            }
                
            }
        }
        
    }
    
    //fazer alguma coisa que calcule o valor da distância de start e stop
    //indicar o caminho que ele fez
    //como calcular com todas as rotas e descobrir qual é a melhor??
    
    
    
     
    
    return 0;
}