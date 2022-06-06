#include <stdio.h>
#include <math.h>

float soma(float a, float b);
float vezes(float a, float b); 
float menos(float a, float b);
float dividido(float a, float b);
float potencia(float a, float b);


int main(){
    float a,b;
    char op;
    
    scanf("%f%c%f", &a,&op,&b);
    
    if(op == '+'){
    printf("%.3f\n", soma(a,b));
}
    else

    if(op == '*'){
    printf("%.3f\n", vezes(a,b));
}
    else

    if( op == '-'){
    printf("%.3f\n", menos(a,b));
}
    else


    if(op == '/'){
    printf( "%.3f\n", dividido(a,b));
}
    else
    
    
    if(op == '^'){
    printf("%.3f\n", potencia(a,b));
}
    else

   
    return 0;
}




float soma(float a, float b){
    return(a+b);
}

float menos(float a, float b){
    return(a-b);
}

float vezes(float a, float b){
    return(a*b);
}

float dividido(float a, float b){
    return(a/b);
}

float potencia(float a, float b){
    return pow(a,b);
}