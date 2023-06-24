#include <stdio.h>

//ordenação crescente
int main() {
    int vetor[6]= {5, 4, 9, 6, 3, 2}; 
    int i, j, temp;


for(i=5;i>0;i--){ //basicamente indica a quantidade de espaços no vetor -1, indicando a quantidade de espaços que podem ser percorridos
    for(j=0;j<i;j++){ //basicamente indica a quantidade de espaços que ainda deve ser percorrida
        if(vetor[j]>vetor[j+1]){ // aqui que vai ser comparado um espaço com o outro.
            temp= vetor[j]; //essa variável é criada para armazenar temporariamente o valor do vetor na posição j
            vetor[j]=vetor[j+1]; // o espaço do vetor j recebe o valor armazenado anteriormente no vetor j+1
            vetor[j+1]=temp; // o espaço j+1 recebe o valor da vaariável temporária, que consequentemente armazenava o valor do espaço j

        }
        
    }
}
for(j=0;j<6;j++){ //inserir o valor total de espaços do vetor
    printf("%d", vetor[j]);
}
return 0;
}

//para realizar o código em forma decrescente, é so manter toda a estrutura, mas modificar o if mudando o operador lógico:   if(vetor[j]<vetor[j+1])
