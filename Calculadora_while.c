#include <stdio.h>

int main() {
    int num,num1;
    char op;
    scanf("%d %c %d", &num, &op, &num1);

switch(op){
    case '+':
    printf("%d + %d = %d", num,num1,num+num1);
    break;
    
    case '-':
    printf("%d - %d = %d", num,num1,num-num1);
    break;
    
    case '*':
    printf("%d * %d = %d", num,num1,num*num1);
    break;
    
    case '/':
    printf("%d / %d = %d", num,num1,num/num1);
    break;
}


return 0; 
}
