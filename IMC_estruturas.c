#include <stdio.h>
#include <string.h>

int main(){
    typedef struct corpo{
        float altura;
        float peso;
        char nome[80];
    } Corpo;
    
    Corpo c;
    float imc;
    
    scanf("%f", &c.altura);
    scanf("%f", &c.peso);
    scanf("%s", c.nome);//string n precisa de &
    
    imc = (c.peso/(c.altura*c.altura));
    
    printf("%.3f" , imc);
    
    return 0;
}