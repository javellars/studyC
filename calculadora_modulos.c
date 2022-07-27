#include <stdio.h>
#include <math.h>

float soma();
float sub();
float multi();
float divide();
float eleva();

float n1,n2;
char op;

int main()
{

printf("digite a conta:");
scanf("%f %c %f", &n1,&op,&n2);

if(op=='+'){
        printf("%.1f", soma());
    }
if(op=='-'){
        printf("%.1f", sub());
    }
    
if(op=='*'){
        printf("%.1f", multi());
    }
    
if(op=='/'){
        printf("%.1f", divide());
    }
    
if(op=='^'){
        printf("%.1f", eleva());
    }

return 0;
}


float soma(){
return (n1+n2);
}

float sub(){
return (n1-n2);
}

float multi(){
return (n1*n2);    
}

float divide(){
return (n1/n2);
}

float eleva(){
return pow(n1,n2);
}