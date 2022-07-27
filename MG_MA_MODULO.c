#include <stdio.h>
#include <math.h>

float medias();

int main(){
    
    printf("%f", medias());    
    
    
    return 0;
}


float medias(){
    float n1,n2,ma_mg;
    char letra;
    
     scanf("%c", &letra);
     scanf("%f %f", &n1,&n2);
     
    if(letra == 'A'){
        ma_mg = (n1+n2)/2;
    }
    
    else{
        if(letra == 'B'){
            ma_mg = sqrt((n1*n2));
        }
    
    }
    
    return ma_mg;//o if elseif vai definir qual vai ser a conta, mas aqui ele quer o resultado
}
