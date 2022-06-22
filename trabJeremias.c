#include <stdio.h>

#

int main(){
    int i,cv;//cv é o contador do vetor
    char letraM,letraMN,num, apareceu3,apareceu2=0, apareceu=0, vetorparagrafo[1002];//criar um vetor para texto, com 1002 casas
    
//verificar quantas vezes cada caracter apareceu

//rodar os três for(maiuscula, minuscula e numero)
//quando achar FIM parar de rodar o código

scanf("%c", &vetorparagrafo[cv]);//scanfa letraM que é a maior


switch(vetorparagrafo[cv]){
    
    case letraM:{
        if(letraM>=65 && letraM<=90){
         apareceu++;
        }
    break;
    }
    
    case letraMN:{
        if(letraMN>=97 && letraMN<=122){
            apareceu2++;
        }
    break;
    }
    case num:{
        if(num>=0 && num<=9){
            apareceu3++;
        }
    break;
    }
    
}







/*for(cv=0;cv<1002;cv++){//for para o vetorzão, controla quantas vezes vai comparar


    
    for(i=0;i<1;i++){//letra maiúscula
        
        if(letraM>=65 && letraM<=90){//enquanto a letra digitada for maior que 65 e menor que 90
         apareceu++;
        }
    }
    
    for(i=0;i<1;i++){//letra minúscula
        
        if(letraMN>=97 && letraMN<=122){//enquanto a letra digitada for maior que 65 e menor que 90
         apareceu2++;
        }
    }
    
    for(i=0;i<1;i++){//numeros
        
        if(num>=0 && num<=9){//enquanto a letra digitada for maior que 65 e menor que 90
         apareceu3++;
        }
    }
    
    
    
}
*/

printf("a letra %c aparece %d vezes\n", letraM, apareceu);
printf("a letra %c aparece %d vezes\n", letraMN, apareceu2);
printf("o numero %c aparece %d vezes\n", num, apareceu3);





    return 0;
}