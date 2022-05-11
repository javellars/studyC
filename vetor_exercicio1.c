#include <stdio.h>

int main(){
    float notas[20], j=0;
    int i=0;
    
    for(i=0; i<20; i++){
        scanf("%f", &notas[i]);
    }
//até aqui ele recebe e armazena o valor no vetor
    
    
while(j>=0){   //faz rodar enquanto for maior ou igual a 0
    
    
    scanf("%f", &j);//recebe o numero a ser procurado
    if(j<0){//verifica se o numero a ser procurado é menor que zero, se for ele encerra o programa
        break;
    }
    
    
    for(i=0; i<20; i++){ 
        if((i==19)  && (j!=notas[i])){//aqui ele verifica se a nota existe dentre as que foram digitadas antes
            printf("nao existe\n");
        }
        else{
            if(j==notas[i]){
                printf("existe\n");
                break;//aqui ele para o laço de verificação quando acha se exite ou não
            }
        }
        
    }

}

    return 0;
}






 /* for(i=0; i<20; i++){
        scanf("%f", &j);
            if(notas==j){
                printf("existe");
            }
            else{
                printf("não existe");
            }*/


  
    /*do{
        scanf("%f", &notas[nota]);//le a nota
        
        if(notas[nota]>0){//verifica se é maior que 0
        printf("existe\n");
        }
        
        else{break;}
    }
    while(nota<20);*/
    
    
            /*if(i<20){
            i++;
        }
         if(j<20){
             j++;
         }
        if(j==i){
            printf("existe\n");
        }
        else{
            printf("nao existe\n");
        }*/
    
