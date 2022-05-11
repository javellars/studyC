#include <stdio.h> 


int main(){
    float preco[10], lucro=0;
    int quantidade[10], soma=0;
    int p=0,q=0,i=0;
 
 
    for(q=0; q<10;q++){    //leu e armazenou quantidade
        scanf("%d", &quantidade[q]);
    }
       
    for(p=0; p<10;p++){  //leu e armazenou preço
        scanf("%f", &preco[p]);
    }
    
    
    for(i=0;i<10;i++){ //aqui ele calcula o lucro 
        lucro+= preco[i]*quantidade[i];
        
        soma+=quantidade[i]; //só colocou o vetor dentro de uma caixinha de variável
    }
        printf("O lucro foi de  %.3f e a quantidade de produtos vendidos foi de %d\n", lucro, soma );
     
     
     
        return 0;
    }

