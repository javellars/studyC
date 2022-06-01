#include <stdio.h>
#include <math.h>

int main(){
    struct ponto{
        float ponto1;
        float ponto2;
    } c1, c2;
    
    float calculo_ponto;
    float calculo_ponto2;
    
    scanf("%f %f", &(c1.ponto1), &(c1.ponto2));
    
    scanf("%f %f", &(c2.ponto1), &(c2.ponto2));
    
    
    calculo_ponto = sqrt((c2.ponto1 - c1.ponto1 ) * (c2.ponto1 - c1.ponto1 ));
    
    calculo_ponto2 = sqrt((c2.ponto2 - c1.ponto2 ) * (c2.ponto2 - c1.ponto2 ));
        
    if(calculo_ponto==0 && calculo_ponto2==0){
        printf("os pontos sao iguais\n");
    }   
    else{
        printf("os pontos nao sao iguais\n");
    }
    
    return 0;
}