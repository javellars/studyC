#include <stdio.h>

int main(){

    float n1,n2;
    char op;


scanf("%f%c%f", &n1,&op,&n2 );

if(op == '+'){
    printf("%.3f+%.3f=%.3f\n", n1, n2,n1+n2);
}
else

if(op == '*'){
    printf("%.3f*%.3f=%.3f\n", n1, n2,n1*n2);
}
else

if( op == '-'){
    printf("%.3f-%.3f=%.3f\n", n1, n2,n1-n2);
}
else


if(op == '/'){
    printf("%.3f/%.3f=%.3f\n", n1, n2,n1/n2);
}
else

    printf("Operador invalido\n");

return 0;
}