#include <stdio.h>
#include <string.h>

#define cv 1002

int main(){
    int i,j,vetor, quantMaiusculo[26], quantMin[26], quantNum[10];//cv é o contador do vetor
    char vetorparagrafo[cv], letraMaiusculo[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'}, letraMinuscula[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}; //criar um vetor para texto, com 1002 casas
    int letraM,letraMN,num,numeros[10]={'0','1','2','3','4','5','6','7','8','9'};
    
    for(int j = 0; j < 26; j++){
        quantMaiusculo[j] = 0;
        quantMin[j] = 0;
        
        if (j<10){
        quantNum[j] = 0;
        }
        
    }
    
//verificar quantas vezes cada caracter apareceu
//rodar os três for(maiuscula, minuscula e numero)
//quando achar FIM parar de rodar o código

    
fgets(vetorparagrafo,1002,stdin);

while(1 == 1){

for(i=0; i < strlen(vetorparagrafo); i++){
strcmp(vetorparagrafo, "FIM\n");    
    
    for(int j = 0; j < 26; j++){
        if(letraMaiusculo[j] == vetorparagrafo[i]){
            quantMaiusculo[j]++;
        }
    }
    
    for(int j = 0; j < 26; j++){
        if(letraMinuscula[j] == vetorparagrafo[i]){
            quantMin[j]++;
        }
    }

    for(int j = 0; j < 10; j++){
        if(numeros[j] == vetorparagrafo[i]){
            quantNum[j]++;
        }
    }
    
    
}






printf("Caracteres Maiusculos:\n");
for(int j = 0; j < 26; j++){
    printf("%c: ", letraMaiusculo[j]);
    for(int ju =0; ju< quantMaiusculo [j]; ju++){
     printf ("*");
    }
    float probabilidadeM= (letraMaiusculo[j]/vetorparagrafo[i]);
    printf ("%d - %f\n", quantMaiusculo[j], probabilidadeM);
}
//printf ("%d - %d", letraMaiusculo [0], probabilidade);


/*for(int j = 0; j < 26; j++){
   printf("\n%c: %d\n ",letraMaiusculo[j], quantMaiusculo[j]);
}*/



printf("Caracteres Minusculos:\n");
for(int j = 0; j < 26; j++){
    printf("%c: ", letraMinuscula[j]);
    for(int ju =0; ju< quantMin [j]; ju++){
     printf ("*");
    }
    float probabilidadeMN= (letraMinuscula[j]/vetorparagrafo[i]);
    printf ("%d - %f\n", quantMin[j], probabilidadeMN);
}

printf("Dígitos:\n");
for(int j = 0; j < 26; j++){
    printf("%c: ", numeros[j]);
    for(int ju =0; ju< quantNum [j]; ju++){
     printf ("*");
    }
    float probabilidadeN= (numeros[j]/vetorparagrafo[i]);
    printf ("%d - %f\n", quantNum[j], probabilidadeN);
}
break;
}

























/*switch(vetor){
    
    case 12:
        if(letraM>=65 && letraM<=90){
         apareceu++;
        }
    break;
    
    
    case minusculo:
        if(letraMN>=97 && letraMN<=122){
            apareceu2++;
        
    break;
    }
    
    case numero:
        if(num>=0 && num<=9){
            apareceu3++;
        }
    break;
    
    
}
*/






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




    return 0;
}
